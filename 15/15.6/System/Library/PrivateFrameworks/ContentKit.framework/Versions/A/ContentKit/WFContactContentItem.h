@class WFContact, NSDictionary, WFFileType, WFObjectType, NSString;

@interface WFContactContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) WFContact *cachedContact;
@property (readonly, nonatomic) WFContact *contact;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) char includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) char hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) char cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cachedContactGroups;
+ (id)contentCategories;
+ (id)countDescription;
+ (char)hasLibrary;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (void)runQuery:(id)a0 withItems:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
+ (id)stringConversionBehavior;
+ (char)supportedTypeMustBeDeterminedByInstance:(id)a0;

- (void).cxx_destruct;
- (id)defaultSourceForRepresentation:(id)a0;
- (char)canGenerateRepresentationForType:(id)a0;
- (id)changeTransaction;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (char)getListSubtitle:(id /* block */)a0;
- (char)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (id)objectRepresentationsFromLabeledValues:(id)a0;
- (id)unnamedObjectRepresentationsFromLabeledValues:(id)a0;

@end
