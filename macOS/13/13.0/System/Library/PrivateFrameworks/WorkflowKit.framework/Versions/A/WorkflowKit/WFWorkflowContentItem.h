@class NSString, NSDictionary, WFFileType, WFWorkflowReference, WFObjectType;

@interface WFWorkflowContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFWorkflowReference *workflowReference;
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

- (id)folderName;
- (id)defaultSourceForRepresentation:(id)a0;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)workflowIcon;
- (id)actionCount;

@end
