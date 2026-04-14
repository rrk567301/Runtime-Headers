@interface MNNavigationStateNoDestination : MNNavigationState

- (unsigned long long)type;
- (void)setRoutesForPreview:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (void)startNavigationWithDetails:(id)a0 activeBlock:(id /* block */)a1;
- (long long)desiredLocationProviderType;
- (void)postEnterState;

@end
