@interface WFFocusModesManager : NSObject

+ (id)availableModes;
+ (id)defaultActivity;
+ (id)activeMode;
+ (id)availableModesForAutomationsDisplay;
+ (id)enteringSymbolForSymbolName:(id)a0;
+ (id)exitingSymbolForSymbolName:(id)a0;
+ (id)glyphToFilledGlyphMapping;

@end
