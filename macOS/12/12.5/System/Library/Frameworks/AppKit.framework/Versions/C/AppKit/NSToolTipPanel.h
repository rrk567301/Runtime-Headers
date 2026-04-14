@class NSString;

@interface NSToolTipPanel : NSPanel {
    NSString *_toolTipString;
}

@property (retain, nonatomic) NSString *toolTipString;

- (void)dealloc;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (void)accessibilityPostNotification:(id)a0;
- (id)accessibilityTitleAttribute;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (BOOL)ignoresMouseEvents;
- (BOOL)canBecomeVisibleWithoutLogin;
- (unsigned long long)shadowOptions;
- (BOOL)hasShadow;
- (void)_setLevelToShowAboveWindow:(id)a0;

@end
