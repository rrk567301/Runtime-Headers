@class NSApplication, NSMutableSet;

@interface PXApplicationState : PXObservable {
    NSMutableSet *_disabledIdleTimerTokens;
    BOOL _needsUpdateVisibilityState;
}

@property (class, readonly) BOOL isExternalAppAndPhotosIsLocked;
@property (class, readonly, nonatomic) PXApplicationState *sharedState;
@property (class, readonly, nonatomic) BOOL isRunningInPhotosApp;
@property (class, readonly, nonatomic) BOOL isRunningInPhotosTopShelfExtension;
@property (class, readonly, nonatomic) long long photosAppProtectionState;
@property (class, readonly, nonatomic) BOOL isLaunchedForTesting;

@property (readonly, nonatomic) BOOL isInactive;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) NSApplication *application;
@property (readonly, nonatomic) long long visibilityState;
@property (readonly, nonatomic) BOOL isLaunchedForTesting;

- (void)_updateIfNeeded;
- (void)setIsHidden:(BOOL)a0;
- (id)init;
- (void)didPerformChanges;
- (void)setVisibilityState:(long long)a0;
- (void).cxx_destruct;
- (id)initWithApplication:(id)a0;
- (void)_updateVisibilityState;
- (void)setIsInactive:(BOOL)a0;
- (BOOL)isDisablingIdleTimerForReasons:(id *)a0;
- (void)_appDidBecomeActive:(id)a0;
- (void)_appDidBecomeHidden:(id)a0;
- (void)_appDidBecomeInactive:(id)a0;
- (void)_appDidBecomeUnhidden:(id)a0;
- (void)_invalidateVisibilityState;
- (id)beginDisablingIdleTimerForReason:(id)a0;
- (void)endDisablingIdleTimer:(id)a0;
- (id)initWithApplication:(id)a0 isExtension:(BOOL)a1;

@end
