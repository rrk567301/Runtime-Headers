@interface SCRSafariWebArea : SCRWebArea

- (void)dealloc;
- (void)updateBehaviorBasedOnActivities;
- (void)profileChanged:(id)a0;
- (char)chainEvent:(id)a0 request:(id)a1;
- (char)isReadingList;
- (void)pageLoadDidComplete;
- (void)registerProfileObserver;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;
- (void)unregisterProfileObserver;

@end
