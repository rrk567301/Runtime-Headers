@interface IATextInputActionsUtils : NSObject

+ (id)stringForSource:(long long)a0;
+ (id)stringForType:(long long)a0;
+ (id)stringForKeyboardDockItemButtonPressResult:(unsigned long long)a0;
+ (id)stringForKeyboardDockItemButtonType:(unsigned long long)a0;
+ (BOOL)flagOptionsHasIsEmojiSearchSet:(long long)a0;
+ (BOOL)flagOptionsHasIsMarkedTextSet:(long long)a0;
+ (long long)sessionActionsEnumFromSource:(long long)a0;
+ (long long)sessionActionsEnumFromSource:(long long)a0 type:(long long)a1;
+ (id)stringForSessionActionsEnum:(long long)a0;

@end
