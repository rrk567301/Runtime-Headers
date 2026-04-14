@class UIApplicationShortcutItem;

@interface UISHandleApplicationShortcutAction : BSAction

@property (readonly, copy, nonatomic) UIApplicationShortcutItem *uiShortcutItem;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (BOOL)isKindOfClass:(Class)a0;
- (id)initWithShortcutItem:(id)a0;

@end
