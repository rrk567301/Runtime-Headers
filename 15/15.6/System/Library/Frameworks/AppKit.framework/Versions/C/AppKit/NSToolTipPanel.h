@class NSString;

@interface NSToolTipPanel : NSPanel {
    NSString *_toolTipString;
}

@property (retain, nonatomic) NSString *toolTipString;

- (void)dealloc;
- (void)_setLevelToShowAboveWindow:(id)a0;
- (id)accessibilityAttributeNames;
- (char)accessibilityIsTitleAttributeSettable;
- (void)accessibilityPostNotification:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityTitleAttribute;
- (char)canBecomeVisibleWithoutLogin;
- (char)hasShadow;
- (char)ignoresMouseEvents;
- (unsigned long long)shadowOptions;

@end
