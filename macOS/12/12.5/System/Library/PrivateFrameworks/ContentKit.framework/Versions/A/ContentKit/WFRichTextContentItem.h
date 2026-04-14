@interface WFRichTextContentItem : WFGenericFileContentItem <WFContentItemClass>

+ (id)typeDescription;
+ (id)ownedTypes;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)outputTypes;
+ (id)stringConversionBehavior;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)normalizedHTMLDocumentFromHTML:(id)a0;
+ (id)attributedStringFromHTMLFile:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;
+ (id)documentTypeForType:(id)a0;
+ (id)attributesDictionaryForType:(id)a0;
+ (BOOL)typeRequiresMainThread:(id)a0;
+ (id)htmlHeader;
+ (id)htmlFooter;
+ (id)normalizedHTMLDocumentFromHTMLData:(id)a0;

- (BOOL)isContent;
- (id)preferredFileType;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentations:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)getFileRepresentationsForSerialization:(id /* block */)a0;
- (void)getPDFFromResource:(id)a0 includeMargin:(BOOL)a1 options:(id)a2 handler:(id /* block */)a3;
- (void)generateRTFDRepresentation:(id /* block */)a0 fromAttributedString:(id)a1 forType:(id)a2;
- (void)generateDataRepresentation:(id /* block */)a0 fromAttributedString:(id)a1 forType:(id)a2;
- (void)generateAttributedString:(id /* block */)a0 fromFile:(id)a1 forClass:(Class)a2;

@end
