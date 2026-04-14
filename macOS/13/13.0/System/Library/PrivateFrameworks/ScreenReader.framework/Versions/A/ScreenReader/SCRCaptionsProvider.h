@class NSTimer, NSString;

@interface SCRCaptionsProvider : SCROpaqueElementProviderGroup

@property (nonatomic) BOOL shouldFollowNewText;
@property (nonatomic) long long _followingSpeed;
@property (retain, nonatomic) NSTimer *_followTimer;
@property (retain, nonatomic) NSString *_cachedFirstItemValue;

+ (id)_verbosityRotorItemTitleForIndex:(unsigned long long)a0;
+ (long long)_verbosityRotorSpeedForPreferencesValue:(id)a0;
+ (id)_verbosityRotorValueForIndex:(unsigned long long)a0;
+ (double)_timeIntervalFromFollowingSpeed:(long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)descriptionForAction:(id)a0;
- (id)actionNames;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)_registerPreferenceObservers;
- (BOOL)handleLayoutChangeWithInfo:(id)a0;
- (id)firstChildForFocusing;
- (id)lastChildForFocusing;
- (id)buildVerbosityRotorGuides;
- (void)handleVerbosityRotorDidSelectItemAtIndex:(unsigned long long)a0 userInfo:(id)a1;
- (void)addUpdatedItemCount:(unsigned long long)a0 request:(id)a1;
- (BOOL)shouldMoveToNewFocusElementForLayoutChange:(id)a0;
- (BOOL)performActionOverride:(id)a0;
- (void)_dispatchFollowingTimerFired;
- (void)_removePreferenceObservers;
- (void)_updateBrailleFollowSpeedToPreferenceValue:(id)a0;
- (void)_toggleFollowAction;
- (void)_setupFollowingTimer;
- (void)_teardownFollowingTimer;
- (id)_overrideActions;
- (id)_overrideDescriptionForAction:(id)a0;
- (BOOL)_performOverrideActionOverride:(id)a0;

@end
