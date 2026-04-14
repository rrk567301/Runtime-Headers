@class BMMomentsEventDataAction, NSString, NSArray, NSDate;

@interface BMMomentsEventDataEventBundle : BMEventBase <BMStoreData> {
    BOOL _hasRaw_bundleStartDate;
    double _raw_bundleStartDate;
    BOOL _hasRaw_bundleEndDate;
    double _raw_bundleEndDate;
    BOOL _hasRaw_bundleCreationDate;
    double _raw_bundleCreationDate;
    BOOL _hasRaw_bundleExpirationDate;
    double _raw_bundleExpirationDate;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDate *bundleStartDate;
@property (readonly, nonatomic) NSDate *bundleEndDate;
@property (readonly, nonatomic) NSDate *bundleCreationDate;
@property (readonly, nonatomic) NSDate *bundleExpirationDate;
@property (readonly, nonatomic) int bundleInterfaceType;
@property (readonly, nonatomic) BOOL bundleSourceHealthExists;
@property (nonatomic) BOOL hasBundleSourceHealthExists;
@property (readonly, nonatomic) BOOL bundleSourcePhotoExists;
@property (nonatomic) BOOL hasBundleSourcePhotoExists;
@property (readonly, nonatomic) BOOL bundleSourceProactiveExists;
@property (nonatomic) BOOL hasBundleSourceProactiveExists;
@property (readonly, nonatomic) BOOL bundleSourceRoutineExists;
@property (nonatomic) BOOL hasBundleSourceRoutineExists;
@property (readonly, nonatomic) NSString *bundlePromptLanguageFormat;
@property (readonly, nonatomic) NSString *bundlePromptToneID;
@property (readonly, nonatomic) BOOL bundlePromptParametersAvailability;
@property (nonatomic) BOOL hasBundlePromptParametersAvailability;
@property (readonly, nonatomic) int bundlePlaceType;
@property (readonly, nonatomic) int bundlePlaceUserType;
@property (readonly, nonatomic) int bundleBaseEventCateory;
@property (readonly, nonatomic) NSArray *bundleEventIDs;
@property (readonly, nonatomic) BMMomentsEventDataAction *bundleActionType;
@property (readonly, nonatomic) NSArray *backgroundActions;
@property (readonly, nonatomic) BOOL bundleIsFamilyIncluded;
@property (nonatomic) BOOL hasBundleIsFamilyIncluded;
@property (readonly, nonatomic) int bundleTimeTag;
@property (readonly, nonatomic) BOOL isBundleResourceTypeUnknown;
@property (nonatomic) BOOL hasIsBundleResourceTypeUnknown;
@property (readonly, nonatomic) BOOL isBundleResourceTypeValueIncluded;
@property (nonatomic) BOOL hasIsBundleResourceTypeValueIncluded;
@property (readonly, nonatomic) BOOL isBundleResourceTypePhotoAssetsIncluded;
@property (nonatomic) BOOL hasIsBundleResourceTypePhotoAssetsIncluded;
@property (readonly, nonatomic) BOOL isBundleResourceTypeMediaIncluded;
@property (nonatomic) BOOL hasIsBundleResourceTypeMediaIncluded;
@property (readonly, nonatomic) BOOL isBundleResourceTypeWebLinkIncluded;
@property (nonatomic) BOOL hasIsBundleResourceTypeWebLinkIncluded;
@property (readonly, nonatomic) BOOL isBundleResourceTypeInterenceTagIncluded;
@property (nonatomic) BOOL hasIsBundleResourceTypeInterenceTagIncluded;
@property (readonly, nonatomic) int bundlEngagement;
@property (readonly, nonatomic) double bundleVersion;
@property (nonatomic) BOOL hasBundleVersion;
@property (readonly, nonatomic) double rankingVersion;
@property (nonatomic) BOOL hasRankingVersion;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 bundleStartDate:(id)a1 bundleEndDate:(id)a2 bundleCreationDate:(id)a3 bundleExpirationDate:(id)a4 bundleInterfaceType:(int)a5 bundleSourceHealthExists:(id)a6 bundleSourcePhotoExists:(id)a7 bundleSourceProactiveExists:(id)a8 bundleSourceRoutineExists:(id)a9 bundlePromptLanguageFormat:(id)a10 bundlePromptToneID:(id)a11 bundlePromptParametersAvailability:(id)a12 bundlePlaceType:(int)a13 bundlePlaceUserType:(int)a14 bundleBaseEventCateory:(int)a15 bundleEventIDs:(id)a16 bundleActionType:(id)a17 backgroundActions:(id)a18 bundleIsFamilyIncluded:(id)a19 bundleTimeTag:(int)a20 isBundleResourceTypeUnknown:(id)a21 isBundleResourceTypeValueIncluded:(id)a22 isBundleResourceTypePhotoAssetsIncluded:(id)a23 isBundleResourceTypeMediaIncluded:(id)a24 isBundleResourceTypeWebLinkIncluded:(id)a25 isBundleResourceTypeInterenceTagIncluded:(id)a26 bundlEngagement:(int)a27 bundleVersion:(id)a28 rankingVersion:(id)a29;

@end
