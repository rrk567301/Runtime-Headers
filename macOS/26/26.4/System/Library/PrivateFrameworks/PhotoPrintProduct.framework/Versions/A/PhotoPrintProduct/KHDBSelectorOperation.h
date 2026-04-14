@class KHDBSelector;

@interface KHDBSelectorOperation : NSOperation {
    KHDBSelector *_selector;
    id _target;
    id _args[4];
    id _result;
}

@property (retain, nonatomic) id delegateContext;

- (void)main;
- (id)initWithTarget:(id)a0 selector:(id)a1;
- (void)dealloc;
- (void)setArgument:(id)a0 atIndex:(unsigned long long)a1;

@end
