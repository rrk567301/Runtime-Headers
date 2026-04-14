@interface SCRSafariWebArea : SCRWebArea

- (void)dealloc;
- (void)updateBehaviorBasedOnActivities;
- (void)profileChanged:(id)a0;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (BOOL)isReadingList;
- (void)pageLoadDidComplete;
- (void)registerProfileObserver;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)unregisterProfileObserver;

@end
