@class NSString;

@interface ILMasterNode : ILObserverNode {
    NSString *path;
    long long flags;
}

- (void)setFlags:(long long)a0;
- (void)dealloc;
- (id)path;
- (long long)flags;
- (id)initWithObserver:(id)a0 path:(id)a1 flags:(long long)a2;

@end
