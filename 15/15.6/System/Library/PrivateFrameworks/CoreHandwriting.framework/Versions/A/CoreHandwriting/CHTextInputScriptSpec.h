@interface CHTextInputScriptSpec : NSObject

+ (char)isCharacterCJKSymbolsPunctuations:(id)a0;
+ (char)isCharacterEmoji:(id)a0;
+ (char)isCharacterFullWidth:(id)a0;
+ (char)isRightToLeftScriptForCharacter:(id)a0;
+ (char)isSkippableScriptCode:(int)a0;
+ (int)scriptCodeForCodepoint:(unsigned int)a0;
+ (id)scriptHistogramForString:(id)a0;
+ (char)shouldCorrectionGesturesSnapToTokensForScriptCode:(int)a0;
+ (char)shouldRelaxCharacterBoundsPercentageOverlapForScript:(int)a0;
+ (int)singleScriptCodeForString:(id)a0;

@end
