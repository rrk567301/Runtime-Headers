@class UIApplicationShortcutItem;

@interface UISHandleApplicationShortcutAction : BSAction

@property (readonly, copy, nonatomic) UIApplicationShortcutItem *uiShortcutItem;

- (BOOL)isKindOfClass:(Class)a0;
- (long long)UIActionType;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithShortcutItem:(id)a0;

@end
