@interface MNNavigationStateRoutePreviewGuidance : MNNavigationStateGuidance

- (void)stopNavigationWithReason:(unsigned long long)a0;
- (unsigned long long)type;
- (void)setGuidanceType:(unsigned long long)a0;
- (void)enterState;
- (id)initWithStateManager:(id)a0 navigationSessionManager:(id)a1 startDetails:(id)a2;

@end
