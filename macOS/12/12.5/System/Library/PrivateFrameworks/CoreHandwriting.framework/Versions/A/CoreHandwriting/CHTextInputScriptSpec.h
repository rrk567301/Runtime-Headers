@interface CHTextInputScriptSpec : NSObject

+ (int)singleScriptCodeForString:(id)a0;
+ (BOOL)shouldRelaxCharacterBoundsPercentageOverlapForScript:(int)a0;
+ (BOOL)isSkippableScriptCode:(int)a0;
+ (BOOL)shouldCorrectionGesturesSnapToTokensForScriptCode:(int)a0;
+ (BOOL)isRightToLeftScriptForCharacter:(id)a0;
+ (BOOL)isCharacterFullWidth:(id)a0;
+ (BOOL)isCharacterEmoji:(id)a0;

@end
