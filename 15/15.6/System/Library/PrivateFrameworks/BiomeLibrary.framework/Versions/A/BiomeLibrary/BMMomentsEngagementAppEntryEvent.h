@class NSString, NSArray, BMMomentsEngagementBundleSummary, NSDate;

@interface BMMomentsEngagementAppEntryEvent : BMEventBase <BMStoreData> {
    char _hasRaw_timestamp;
    double _raw_timestamp;
    char _hasRaw_startTime;
    double _raw_startTime;
    char _hasRaw_endTime;
    double _raw_endTime;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSArray *identifier;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) int totalCharacters;
@property (nonatomic) char hasTotalCharacters;
@property (readonly, nonatomic) int addedCharacters;
@property (nonatomic) char hasAddedCharacters;
@property (readonly, nonatomic) NSArray *usedPhotoAssets;
@property (readonly, nonatomic) NSString *appEntryEventType;
@property (readonly, nonatomic) NSArray *bundleInterfaceTypes;
@property (readonly, nonatomic) NSArray *bundleEvergreenTypes;
@property (readonly, nonatomic) BMMomentsEngagementBundleSummary *bundleSummary;
@property (readonly, nonatomic) NSArray *assets;
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
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)_assetsJSONArray;
- (id)_bundleEvergreenTypesJSONArray;
- (id)_bundleInterfaceTypesJSONArray;
- (id)_identifierJSONArray;
- (id)_usedPhotoAssetsJSONArray;
- (id)initWithType:(int)a0 clientIdentifier:(id)a1 timestamp:(id)a2 identifier:(id)a3 startTime:(id)a4 endTime:(id)a5 totalCharacters:(id)a6 addedCharacters:(id)a7 usedPhotoAssets:(id)a8;
- (id)initWithType:(int)a0 clientIdentifier:(id)a1 timestamp:(id)a2 identifier:(id)a3 startTime:(id)a4 endTime:(id)a5 totalCharacters:(id)a6 addedCharacters:(id)a7 usedPhotoAssets:(id)a8 appEntryEventType:(id)a9 bundleInterfaceTypes:(id)a10 bundleEvergreenTypes:(id)a11;
- (id)initWithType:(int)a0 clientIdentifier:(id)a1 timestamp:(id)a2 identifier:(id)a3 startTime:(id)a4 endTime:(id)a5 totalCharacters:(id)a6 addedCharacters:(id)a7 usedPhotoAssets:(id)a8 appEntryEventType:(id)a9 bundleInterfaceTypes:(id)a10 bundleEvergreenTypes:(id)a11 bundleSummary:(id)a12 assets:(id)a13;

@end
