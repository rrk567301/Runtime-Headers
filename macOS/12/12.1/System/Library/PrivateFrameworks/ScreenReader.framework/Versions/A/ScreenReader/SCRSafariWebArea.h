@interface SCRSafariWebArea : SCRWebArea

- (void)dealloc;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (BOOL)isReadingList;
- (void)registerProfileObserver;
- (void)unregisterProfileObserver;
- (void)pageLoadDidComplete;
- (void)profileChanged:(id)a0;
- (void)updateBehaviorBasedOnActivities;

@end
