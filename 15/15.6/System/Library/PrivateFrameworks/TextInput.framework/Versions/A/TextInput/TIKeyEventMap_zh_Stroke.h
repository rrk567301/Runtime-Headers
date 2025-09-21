@interface TIKeyEventMap_zh_Stroke : TIKeyEventMap_zh

+ (id)sharedInstance;
+ (char)supportsSecureCoding;

- (char)isNumericWubi:(id)a0;
- (id)remapKeyWithString:(id)a0 stringWithoutModifiers:(id)a1 modifierFlags:(unsigned long long)a2 keyboardState:(id)a3;
- (id)wubiFromASCII:(id)a0;

@end
