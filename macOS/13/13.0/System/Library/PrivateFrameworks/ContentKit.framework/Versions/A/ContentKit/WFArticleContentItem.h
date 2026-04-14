@class NSString, NSDictionary, WFFileType, WFArticle, WFObjectType;

@interface WFArticleContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFArticle *article;
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
+ (id)outputTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)fileWithHTML:(id)a0 named:(id)a1;
+ (id)attributedStringWithHTML:(id)a0 named:(id)a1;
+ (BOOL)supportedTypesMustBeDeterminedByInstance;

- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;

@end
