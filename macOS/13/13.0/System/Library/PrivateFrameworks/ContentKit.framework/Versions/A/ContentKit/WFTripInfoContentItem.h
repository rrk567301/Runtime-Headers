@class NSString, NSDictionary, WFTripInfo, WFFileType, WFObjectType;

@interface WFTripInfoContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFTripInfo *tripInfo;
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

- (id)distance;
- (id)arrivalTime;
- (id)travelTime;
- (id)routeName;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;

@end
