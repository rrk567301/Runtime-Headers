@interface RTIUtilities : NSObject

+ (id)_attributeToReplaceForDecoding:(id)a0;
+ (id)_attributeToReplaceForCoding:(id)a0;
+ (id)_attributedStringWithoutDefaultAttributes:(id)a0;
+ (id)_codableAttributedString:(id)a0 validAttributes:(id)a1;
+ (id)_decodableAttributedString:(id)a0;
+ (id)customInfoClassesForType:(id)a0 forClass:(Class)a1;
+ (id)customInfoDictionary;
+ (void)registerCustomInfoClasses:(id)a0 forType:(id)a1 forClass:(Class)a2;
+ (void)unregisterCustomInfoType:(id)a0 forClass:(Class)a1;

@end
