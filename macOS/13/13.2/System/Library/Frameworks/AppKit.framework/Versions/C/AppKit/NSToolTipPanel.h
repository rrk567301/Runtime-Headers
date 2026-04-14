@class NSString;

@interface NSToolTipPanel : NSPanel {
    NSString *_toolTipString;
}

@property (retain, nonatomic) NSString *toolTipString;

- (void)dealloc;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (id)accessibilityTitleAttribute;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (void)accessibilityPostNotification:(id)a0;
- (BOOL)canBecomeVisibleWithoutLogin;
- (unsigned long long)shadowOptions;
- (BOOL)hasShadow;
- (BOOL)ignoresMouseEvents;
- (void)_setLevelToShowAboveWindow:(id)a0;

@end
