@interface TIKeyEventMap_zh : TIKeyEventMap

+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;
+ (id)punctuationMap_zh_Hans;
+ (id)punctuationMap_zh_Hant;

- (id)remapKeyWithString:(id)a0 stringWithoutModifiers:(id)a1 modifierFlags:(unsigned long long)a2 keyboardState:(id)a3;
- (BOOL)isURLOrEmailKeyboardInKeyboardState:(id)a0;
- (id)punctuationMap;

@end
