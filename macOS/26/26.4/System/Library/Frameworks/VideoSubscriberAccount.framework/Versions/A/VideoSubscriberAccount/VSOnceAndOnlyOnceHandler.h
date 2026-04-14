@interface VSOnceAndOnlyOnceHandler : NSObject {
    _Atomic int _counter;
}

@property (copy, nonatomic) id /* block */ block;

- (void)invoke;
- (void).cxx_destruct;
- (void)dealloc;

@end
