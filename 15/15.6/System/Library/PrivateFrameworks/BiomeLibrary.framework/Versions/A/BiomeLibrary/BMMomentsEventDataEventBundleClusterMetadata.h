@class NSString;

@interface BMMomentsEventDataEventBundleClusterMetadata : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char isFiltered;
@property (nonatomic) char hasIsFiltered;
@property (readonly, nonatomic) char isTopLevelActivityTypePhenotypeDetected;
@property (nonatomic) char hasIsTopLevelActivityTypePhenotypeDetected;
@property (readonly, nonatomic) char isSecondLevelActivityTypePhenotypeDetected;
@property (nonatomic) char hasIsSecondLevelActivityTypePhenotypeDetected;
@property (readonly, nonatomic) char isWeekendPhenotypeDetected;
@property (nonatomic) char hasIsWeekendPhenotypeDetected;
@property (readonly, nonatomic) char isTimeTagPhenotypeDetected;
@property (nonatomic) char hasIsTimeTagPhenotypeDetected;
@property (readonly, nonatomic) char isDayOfWeekPhenotypeDetected;
@property (nonatomic) char hasIsDayOfWeekPhenotypeDetected;
@property (readonly, nonatomic) char isPlaceNamePhenotypeDetected;
@property (nonatomic) char hasIsPlaceNamePhenotypeDetected;
@property (readonly, nonatomic) char isCombinedPlacePhenotypeDetected;
@property (nonatomic) char hasIsCombinedPlacePhenotypeDetected;
@property (readonly, nonatomic) char isEnclosingAreaNamePhenotypeDetected;
@property (nonatomic) char hasIsEnclosingAreaNamePhenotypeDetected;
@property (readonly, nonatomic) char isPersonsPhenotypeDetected;
@property (nonatomic) char hasIsPersonsPhenotypeDetected;
@property (readonly, nonatomic) char isPersonRelationshipPhenotypeDetected;
@property (nonatomic) char hasIsPersonRelationshipPhenotypeDetected;
@property (readonly, nonatomic) char isActivityTypeFromPhotoTraitsPhenotypeDetected;
@property (nonatomic) char hasIsActivityTypeFromPhotoTraitsPhenotypeDetected;
@property (readonly, nonatomic) char isTimeContextFromPhotoTraitsPhenotypeDetected;
@property (nonatomic) char hasIsTimeContextFromPhotoTraitsPhenotypeDetected;
@property (readonly, nonatomic) char isLocationContextFromPhotoTraitsPhenotypeDetected;
@property (nonatomic) char hasIsLocationContextFromPhotoTraitsPhenotypeDetected;
@property (readonly, nonatomic) char isSocialContextFromPhotoTraitsPhenotypeDetected;
@property (nonatomic) char hasIsSocialContextFromPhotoTraitsPhenotypeDetected;
@property (readonly, nonatomic) char isExtraContextFromPhotoTraitsPhenotypeDetected;
@property (nonatomic) char hasIsExtraContextFromPhotoTraitsPhenotypeDetected;
@property (readonly, nonatomic) char isOtherSubjectFromPhotoTraitsPhenotypeDetected;
@property (nonatomic) char hasIsOtherSubjectFromPhotoTraitsPhenotypeDetected;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithIsFiltered:(id)a0 isTopLevelActivityTypePhenotypeDetected:(id)a1 isSecondLevelActivityTypePhenotypeDetected:(id)a2 isWeekendPhenotypeDetected:(id)a3 isTimeTagPhenotypeDetected:(id)a4 isDayOfWeekPhenotypeDetected:(id)a5 isPlaceNamePhenotypeDetected:(id)a6 isCombinedPlacePhenotypeDetected:(id)a7 isEnclosingAreaNamePhenotypeDetected:(id)a8 isPersonsPhenotypeDetected:(id)a9 isPersonRelationshipPhenotypeDetected:(id)a10 isActivityTypeFromPhotoTraitsPhenotypeDetected:(id)a11 isTimeContextFromPhotoTraitsPhenotypeDetected:(id)a12 isLocationContextFromPhotoTraitsPhenotypeDetected:(id)a13 isSocialContextFromPhotoTraitsPhenotypeDetected:(id)a14 isExtraContextFromPhotoTraitsPhenotypeDetected:(id)a15 isOtherSubjectFromPhotoTraitsPhenotypeDetected:(id)a16;

@end
