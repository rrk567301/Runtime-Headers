@interface MNNavigationStateNoDestination : MNNavigationState

- (void)setRoutesForPreview:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (void)startNavigationWithDetails:(id)a0 activeBlock:(id /* block */)a1;
- (unsigned long long)type;
- (long long)desiredLocationProviderType;
- (void)postEnterState;

@end
