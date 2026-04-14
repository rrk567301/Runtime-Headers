@interface RTIUtilities : NSObject

+ (id)_attributeToReplaceForCoding:(id)a0;
+ (id)_textAnnotationAttributes;
+ (id)currentClientCodingServiceOptions;
+ (id)_attributesToAllowForCoding;
+ (void)unregisterCustomInfoType:(id)a0 forClass:(Class)a1;
+ (id)customInfoDictionary;
+ (void)makeClientCodingQueuePthreadKeyOnce;
+ (void)performClientCoding:(id /* block */)a0 withServiceOptions:(id)a1;
+ (void)registerCustomInfoClasses:(id)a0 forType:(id)a1 forClass:(Class)a2;
+ (id)_decodableAttributedString:(id)a0;
+ (id)_codableAttributedString:(id)a0 validAttributes:(id)a1;
+ (id)customInfoClassesForType:(id)a0 forClass:(Class)a1;
+ (id)_attributeToReplaceForDecoding:(id)a0;

@end
