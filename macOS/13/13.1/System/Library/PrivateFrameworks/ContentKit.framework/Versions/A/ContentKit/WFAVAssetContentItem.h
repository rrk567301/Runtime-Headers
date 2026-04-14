@class AVAsset, NSDictionary, WFFileType, WFObjectType, NSString;

@interface WFAVAssetContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) AVAsset *asset;
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
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;

- (id)duration;
- (id)frameRate;
- (id)supportedTypes;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)getPreferredFileSize:(id /* block */)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (id)generateExportSessionForType:(id)a0;
- (id)metadataItemForCommonKey:(id)a0;
- (void)generateFileRepresentation:(id /* block */)a0 forType:(id)a1 metadata:(id)a2 options:(id)a3;
- (BOOL)getListAltText:(id /* block */)a0;

@end
