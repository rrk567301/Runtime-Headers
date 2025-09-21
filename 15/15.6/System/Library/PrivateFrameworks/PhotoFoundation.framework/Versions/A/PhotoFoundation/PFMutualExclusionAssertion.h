@interface PFMutualExclusionAssertion : NSObject {
    char _inCriticalSection;
}

- (void)enterCriticalSection;
- (void)leaveCriticalSection;
- (void)performCriticalSection:(id /* block */)a0;

@end
