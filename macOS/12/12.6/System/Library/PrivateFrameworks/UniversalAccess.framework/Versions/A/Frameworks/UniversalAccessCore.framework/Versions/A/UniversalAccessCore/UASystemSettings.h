@interface UASystemSettings : NSObject

@property (class, readonly, nonatomic) BOOL _shouldApplySystemSettings;
@property (class, readonly, nonatomic) UASystemSettings *shared;

@property (nonatomic) BOOL _registeredForScrollChangedNotification;

- (void)dealloc;
- (void)_systemSetScrollBarsPref:(struct __CFString { } *)a0;
- (BOOL)_hasAccessibilityScrollBarOverrides;
- (struct __CFString { } *)_systemScrollBarPrefFromAccessibility;
- (struct __CFString { } *)_systemGetScrollBarsPref;
- (struct __CFString { } *)_upToDateSystemScrollBarPref;
- (void)_registerForScrollChangedNotificationIfNeeded;
- (void)_updateSystemScrollBarsPrefIfNeeded;
- (void)_systemAlwaysShowScrollBars;
- (void)setAlwaysShowScrollbars:(BOOL)a0 withIdentifier:(id)a1;
- (void)_scrollBarSettingsChangedExternally;

@end
