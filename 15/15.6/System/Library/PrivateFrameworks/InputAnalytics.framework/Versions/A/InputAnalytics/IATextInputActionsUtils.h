@interface IATextInputActionsUtils : NSObject

+ (id)stringForSource:(long long)a0;
+ (id)stringForType:(long long)a0;
+ (id)stringForKeyboardDockItemButtonPressResult:(unsigned long long)a0;
+ (id)stringForKeyboardDockItemButtonType:(unsigned long long)a0;
+ (id)stringForReplaceWithCandidateType:(long long)a0;
+ (unsigned long long)log10WholeNumberForUnsignedInt:(unsigned long long)a0;
+ (long long)setBool:(char)a0 forField:(long long)a1 inFlagOptions:(long long)a2;
+ (char)isEmojiSearchSetInFlagOptions:(long long)a0;
+ (char)isMarkedTextSetInFlagOptions:(long long)a0;
+ (char)isWebSetInFlagOptions:(long long)a0;
+ (unsigned long long)log10IntegerForInt:(long long)a0;
+ (long long)sessionActionsEnumFromSource:(long long)a0;
+ (long long)sessionActionsEnumFromSource:(long long)a0 type:(long long)a1;
+ (long long)setEmojiSearch:(char)a0 inFlagOptions:(long long)a1;
+ (long long)setMarkedText:(char)a0 inFlagOptions:(long long)a1;
+ (long long)setWeb:(char)a0 inFlagOptions:(long long)a1;
+ (id)stringForSessionActionsEnum:(long long)a0;

@end
