class OrderedStream {
	constructor(n) {
		this.pointer = 0;
		this.list = [];
	}

	insert(id, val) {
		let chunk = [];
		this.list[id - 1] = val;
		while (this.list[this.pointer]) {
			chunk.push(this.list[this.pointer]);
			this.pointer++;
		}
		return chunk;
	}
}