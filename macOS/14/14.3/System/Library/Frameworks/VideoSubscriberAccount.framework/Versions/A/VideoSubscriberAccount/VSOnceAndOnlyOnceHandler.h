@interface VSOnceAndOnlyOnceHandler : NSObject {
    int _counter;
}

@property (copy, nonatomic) id /* block */ block;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invoke;

@end
