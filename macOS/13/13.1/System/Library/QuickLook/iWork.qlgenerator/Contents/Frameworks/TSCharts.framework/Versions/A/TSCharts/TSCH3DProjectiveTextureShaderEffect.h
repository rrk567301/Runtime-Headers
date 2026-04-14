@interface TSCH3DProjectiveTextureShaderEffect : TSCH3DShaderEffect

+ (id)variableShadowColor;
+ (id)variableShadowBorderFade;
+ (id)variableTexture;
+ (id)stateSharingID;

- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (id)variableShadowColor;
- (id)variableShadowBorderFade;
- (id)variableTexture;
- (void)uploadData:(id)a0 effectsStates:(id)a1;

@end
