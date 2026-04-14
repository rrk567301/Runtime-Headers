@class NSString, NSDictionary, WFFileType, WFObjectType;

@interface WFRichTextContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeDescription;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)outputTypes;
+ (id)stringConversionBehavior;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)documentTypeForType:(id)a0;
+ (BOOL)typeRequiresMainThread:(id)a0;
+ (id)attributesDictionaryForType:(id)a0;
+ (void)loadAttributedStringInWebViewFromHTMLFile:(id)a0 handler:(id /* block */)a1 attributedStringOptions:(id)a2 documentAttributes:(id *)a3 name:(id)a4 coercionOptions:(id)a5;
+ (id)htmlHeader;
+ (id)htmlFooter;
+ (id)normalizedHTMLDocumentFromHTML:(id)a0;
+ (id)normalizedHTMLDocumentFromHTMLData:(id)a0;
+ (id)attributedStringFromHTMLFile:(id)a0 options:(id)a1 documentAttributes:(id *)a2 error:(id *)a3;

@end
