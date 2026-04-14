@interface SCRSafariWebArea : SCRWebArea

- (void)dealloc;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)pageLoadDidComplete;
- (void)profileChanged:(id)a0;
- (void)updateBehaviorBasedOnActivities;
- (BOOL)isReadingList;
- (void)registerProfileObserver;
- (void)unregisterProfileObserver;

@end
