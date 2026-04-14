@class NSString;

@interface ILMasterNode : ILObserverNode {
    NSString *path;
    long long flags;
}

- (long long)flags;
- (id)path;
- (void)setFlags:(long long)a0;
- (void)dealloc;
- (id)initWithObserver:(id)a0 path:(id)a1 flags:(long long)a2;

@end
