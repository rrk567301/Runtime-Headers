@interface WFFocusModesManager : NSObject

+ (id)availableModes;
+ (id)activeMode;
+ (id)defaultActivity;
+ (id)availableModesForAutomationsDisplay;
+ (id)glyphToFilledGlyphMapping;
+ (id)enteringSymbolForSymbolName:(id)a0;
+ (id)exitingSymbolForSymbolName:(id)a0;

@end
