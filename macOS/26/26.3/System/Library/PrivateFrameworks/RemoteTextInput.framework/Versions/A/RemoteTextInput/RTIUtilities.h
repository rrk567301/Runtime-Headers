@interface RTIUtilities : NSObject

+ (id)_codableAttributedString:(id)a0 validAttributes:(id)a1;
+ (void)makeClientCodingQueuePthreadKeyOnce;
+ (id)_decodableAttributedString:(id)a0;
+ (id)_textAnnotationAttributes;
+ (void)performClientCoding:(id /* block */)a0 withServiceOptions:(id)a1;
+ (id)_attributeToReplaceForCoding:(id)a0;
+ (void)unregisterCustomInfoType:(id)a0 forClass:(Class)a1;
+ (id)currentClientCodingServiceOptions;
+ (void)registerCustomInfoClasses:(id)a0 forType:(id)a1 forClass:(Class)a2;
+ (id)_attributesToAllowForCoding;
+ (id)customInfoClassesForType:(id)a0 forClass:(Class)a1;
+ (id)_attributeToReplaceForDecoding:(id)a0;
+ (id)customInfoDictionary;

@end
