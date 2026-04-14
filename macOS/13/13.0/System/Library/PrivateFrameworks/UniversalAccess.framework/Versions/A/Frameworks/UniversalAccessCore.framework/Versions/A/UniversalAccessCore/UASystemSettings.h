@interface UASystemSettings : NSObject

@property (class, readonly, nonatomic) BOOL _shouldApplySystemSettings;
@property (class, readonly, nonatomic) UASystemSettings *shared;

@property (nonatomic) BOOL _registeredForScrollChangedNotification;

- (void)dealloc;
- (void)_systemAlwaysShowScrollBars;
- (struct __CFString { } *)_systemGetScrollBarsPref;
- (void)_systemSetScrollBarsPref:(struct __CFString { } *)a0;
- (BOOL)_hasAccessibilityScrollBarOverrides;
- (struct __CFString { } *)_systemScrollBarPrefFromAccessibility;
- (struct __CFString { } *)_upToDateSystemScrollBarPref;
- (void)_updateSystemScrollBarsPrefIfNeeded;
- (void)setAlwaysShowScrollbars:(BOOL)a0 withIdentifier:(id)a1;
- (void)_scrollBarSettingsChangedExternally;
- (void)_registerForScrollChangedNotificationIfNeeded;

@end
