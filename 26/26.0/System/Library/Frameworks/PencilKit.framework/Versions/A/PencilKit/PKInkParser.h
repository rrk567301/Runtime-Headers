@interface PKInkParser : NSObject

+ (BOOL)hasDefinitionForIdentifier:(id)a0;
+ (struct CGImage { } *)imageRefForTextureName:(id)a0;
+ (id)inkBehaviorFromDictionary:(id)a0 identifier:(id)a1 version:(unsigned long long)a2 variant:(id)a3;
+ (id)inkBehaviorVariantWithDictionary:(id)a0 renderingDescriptor:(id)a1 identifier:(id)a2 version:(unsigned long long)a3 variant:(id)a4;
+ (id)inkBehaviorsWithIdentifer:(id)a0;
+ (id)inkBehaviorsWithIdentifer:(id)a0 version:(unsigned long long)a1;
+ (id)inkRenderingDescriptorWithDictionary:(id)a0;
+ (struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { struct PKFunction *x0; })loadFunction:(id)a0;
+ (struct vector<PKOutputFunction, std::allocator<PKOutputFunction>> { struct PKOutputFunction *x0; struct PKOutputFunction *x1; struct PKOutputFunction *x2; })loadOutput:(id)a0;
+ (id)plistDictionaryForInk:(id)a0;
+ (id)plistPathForIdentifier:(id)a0;
+ (id)v2plistPathForIdentifier:(id)a0;
+ (void)validateBehaviorVariantDictionary:(id)a0;
+ (void)validateFunctionDictionary:(id)a0;
+ (void)validatePiecewiseBezierFunction:(void *)a0;
+ (void)validateRenderingDescriptorDictionary:(id)a0;
+ (void)verifyParameters:(id)a0;

@end
