type Promiseable<T> = {
    promise: Promise<T>,
    resolve: (value: T) => void,
    reject: (reason: any) => void,
}

type PromiseFactory<T> = () => Promiseable<T>;

function explodePromise<T>(): Promiseable<T> {
    let resolve, reject;
    let promise = new Promise((res,rej) => {
        resolve = res;
        reject = rej;

    });
    return {
        promise, resolve, reject,
    };
}

array#map // copies
array#filter //copies
array#forEach // iterates
array#reduce // always a bad decision
map#forEach // weird interface
