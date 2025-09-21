@class NSString;

@interface BMMediaAnalysisPerAsset : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSString *shootingCategory;
@property (readonly, nonatomic) NSString *shootingMode;
@property (readonly, nonatomic) int duration;
@property (nonatomic) char hasDuration;
@property (readonly, nonatomic) int highlightCount;
@property (nonatomic) char hasHighlightCount;
@property (readonly, nonatomic) int highlightDuration;
@property (nonatomic) char hasHighlightDuration;
@property (readonly, nonatomic) int temporalFaceCount;
@property (nonatomic) char hasTemporalFaceCount;
@property (readonly, nonatomic) int temporalSceneCount;
@property (nonatomic) char hasTemporalSceneCount;
@property (readonly, nonatomic) char containNamedPerson;
@property (nonatomic) char hasContainNamedPerson;
@property (readonly, nonatomic) char containNamedPet;
@property (nonatomic) char hasContainNamedPet;
@property (readonly, nonatomic) char containNatureOrNaturalLandmarks;
@property (nonatomic) char hasContainNatureOrNaturalLandmarks;
@property (readonly, nonatomic) char containSkyline;
@property (nonatomic) char hasContainSkyline;
@property (readonly, nonatomic) char containLandmarks;
@property (nonatomic) char hasContainLandmarks;
@property (readonly, nonatomic) char containAction;
@property (nonatomic) char hasContainAction;
@property (readonly, nonatomic) char containHighMotion;
@property (nonatomic) char hasContainHighMotion;
@property (readonly, nonatomic) char containAudioTypes;
@property (nonatomic) char hasContainAudioTypes;
@property (readonly, nonatomic) char atFavoritedLocation;
@property (nonatomic) char hasAtFavoritedLocation;
@property (readonly, nonatomic) int durationOriginal;
@property (nonatomic) char hasDurationOriginal;
@property (readonly, nonatomic) int highlightCountOriginal;
@property (nonatomic) char hasHighlightCountOriginal;
@property (readonly, nonatomic) int highlightDurationOriginal;
@property (nonatomic) char hasHighlightDurationOriginal;
@property (readonly, nonatomic) int temporalFaceCountOriginal;
@property (nonatomic) char hasTemporalFaceCountOriginal;
@property (readonly, nonatomic) int temporalSceneCountOriginal;
@property (nonatomic) char hasTemporalSceneCountOriginal;
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
- (id)initWithContentType:(id)a0 shootingCategory:(id)a1 shootingMode:(id)a2 duration:(id)a3 highlightCount:(id)a4 highlightDuration:(id)a5 temporalFaceCount:(id)a6 temporalSceneCount:(id)a7 containNamedPerson:(id)a8 containNamedPet:(id)a9 containNatureOrNaturalLandmarks:(id)a10 containSkyline:(id)a11 containLandmarks:(id)a12 containAction:(id)a13 containHighMotion:(id)a14 containAudioTypes:(id)a15 atFavoritedLocation:(id)a16 durationOriginal:(id)a17 highlightCountOriginal:(id)a18 highlightDurationOriginal:(id)a19 temporalFaceCountOriginal:(id)a20 temporalSceneCountOriginal:(id)a21;

@end
