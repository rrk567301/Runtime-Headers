@class NSApplication, NSMutableSet;

@interface PXApplicationState : PXObservable {
    NSMutableSet *_disabledIdleTimerTokens;
    char _needsUpdateVisibilityState;
}

@property (class, readonly) char isExternalAppAndPhotosIsLocked;
@property (class, readonly, nonatomic) PXApplicationState *sharedState;
@property (class, readonly, nonatomic) char isRunningInPhotosApp;
@property (class, readonly, nonatomic) char isRunningInPhotosTopShelfExtension;
@property (class, readonly, nonatomic) long long photosAppProtectionState;
@property (class, readonly, nonatomic) char isLaunchedForTesting;

@property (readonly, nonatomic) char isInactive;
@property (readonly, nonatomic) char isHidden;
@property (readonly, nonatomic) NSApplication *application;
@property (readonly, nonatomic) long long visibilityState;
@property (readonly, nonatomic) char isLaunchedForTesting;

- (id)init;
- (void).cxx_destruct;
- (void)setIsHidden:(char)a0;
- (void)_updateVisibilityState;
- (void)setIsInactive:(char)a0;
- (void)setVisibilityState:(long long)a0;
- (id)initWithApplication:(id)a0;
- (void)_updateIfNeeded;
- (void)didPerformChanges;
- (char)isDisablingIdleTimerForReasons:(id *)a0;
- (void)_appDidBecomeActive:(id)a0;
- (void)_appDidBecomeHidden:(id)a0;
- (void)_appDidBecomeInactive:(id)a0;
- (void)_appDidBecomeUnhidden:(id)a0;
- (void)_invalidateVisibilityState;
- (id)beginDisablingIdleTimerForReason:(id)a0;
- (void)endDisablingIdleTimer:(id)a0;
- (id)initWithApplication:(id)a0 isExtension:(char)a1;

@end
