@interface UASystemSettings : NSObject

@property (class, readonly, nonatomic) char _shouldApplySystemSettings;
@property (class, readonly, nonatomic) UASystemSettings *shared;

@property (nonatomic) char _registeredForScrollChangedNotification;

- (void)dealloc;
- (char)_hasAccessibilityScrollBarOverrides;
- (void)_registerForScrollChangedNotificationIfNeeded;
- (void)_scrollBarSettingsChangedExternally;
- (void)_systemAlwaysShowScrollBars;
- (struct __CFString { } *)_systemGetScrollBarsPref;
- (struct __CFString { } *)_systemScrollBarPrefFromAccessibility;
- (void)_systemSetScrollBarsPref:(struct __CFString { } *)a0;
- (struct __CFString { } *)_upToDateSystemScrollBarPref;
- (void)_updateSystemScrollBarsPrefIfNeeded;
- (void)setAlwaysShowScrollbars:(char)a0 withIdentifier:(id)a1;

@end
