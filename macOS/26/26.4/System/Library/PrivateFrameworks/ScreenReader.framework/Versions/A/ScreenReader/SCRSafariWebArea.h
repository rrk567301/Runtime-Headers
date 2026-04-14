@interface SCRSafariWebArea : SCRWebArea

- (void)dealloc;
- (BOOL)isReadingList;
- (void)profileChanged:(id)a0;
- (void)updateBehaviorBasedOnActivities;
- (BOOL)chainEvent:(id)a0 request:(id)a1;
- (void)pageLoadDidComplete;
- (void)registerProfileObserver;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)unregisterProfileObserver;

@end
