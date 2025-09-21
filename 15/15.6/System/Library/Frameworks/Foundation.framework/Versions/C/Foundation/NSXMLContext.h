@interface NSXMLContext : NSObject

+ (void)_initDefaultNamespaces;
+ (void)_initEmptyHTMLNames;
+ (void)_initSingleAttributes;
+ (void)_initValueTransformers;
+ (id)defaultNamespaceForPrefix:(id)a0;
+ (id)defaultNamespaceForURI:(id)a0;
+ (char)isEmptyHTMLElement:(id)a0;
+ (char)isSingleAttribute:(id)a0;
+ (id)normalizeWhitespace:(id)a0;
+ (id)stringForObjectValue:(id)a0;

@end
