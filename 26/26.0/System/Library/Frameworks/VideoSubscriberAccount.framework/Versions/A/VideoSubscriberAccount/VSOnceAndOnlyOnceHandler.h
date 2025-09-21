@interface VSOnceAndOnlyOnceHandler : NSObject {
    _Atomic int _counter;
}

@property (copy, nonatomic) id /* block */ block;

- (void)invoke;
- (void)dealloc;
- (void).cxx_destruct;

@end
