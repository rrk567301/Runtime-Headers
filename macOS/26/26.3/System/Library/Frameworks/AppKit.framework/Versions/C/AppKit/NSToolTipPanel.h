@class NSString;

@interface NSToolTipPanel : NSPanel {
    NSString *_toolTipString;
}

@property (retain, nonatomic) NSString *toolTipString;

- (BOOL)hasShadow;
- (void)dealloc;
- (void)_setLevelToShowAboveWindow:(id)a0;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (void)accessibilityPostNotification:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityTitleAttribute;
- (BOOL)canBecomeVisibleWithoutLogin;
- (BOOL)ignoresMouseEvents;
- (unsigned long long)shadowOptions;

@end
