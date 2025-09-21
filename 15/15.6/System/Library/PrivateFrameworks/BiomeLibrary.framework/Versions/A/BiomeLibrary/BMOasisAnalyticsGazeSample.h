@class NSString;

@interface BMOasisAnalyticsGazeSample : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *userProfileId;
@property (readonly, nonatomic) int eyeSide;
@property (readonly, nonatomic) int pupilSizeCategory;
@property (readonly, nonatomic) float offsetWithinEyeboxX;
@property (nonatomic) char hasOffsetWithinEyeboxX;
@property (readonly, nonatomic) float offsetWithinEyeboxY;
@property (nonatomic) char hasOffsetWithinEyeboxY;
@property (readonly, nonatomic) float offsetWithinEyeboxZ;
@property (nonatomic) char hasOffsetWithinEyeboxZ;
@property (readonly, nonatomic) float totalEyeRelief;
@property (nonatomic) char hasTotalEyeRelief;
@property (readonly, nonatomic) float nearEyeRelief;
@property (nonatomic) char hasNearEyeRelief;
@property (readonly, nonatomic) float pupil2dVisibleRatioNecam;
@property (nonatomic) char hasPupil2dVisibleRatioNecam;
@property (readonly, nonatomic) float pupil2dVisibleRatioBecam;
@property (nonatomic) char hasPupil2dVisibleRatioBecam;
@property (readonly, nonatomic) float pupilIrisContrastNecam;
@property (nonatomic) char hasPupilIrisContrastNecam;
@property (readonly, nonatomic) float pupilIrisContrastBecam;
@property (nonatomic) char hasPupilIrisContrastBecam;
@property (readonly, nonatomic) unsigned int countOfVisibleGlintsNecam;
@property (nonatomic) char hasCountOfVisibleGlintsNecam;
@property (readonly, nonatomic) unsigned int countOfVisibleGlintsBecam;
@property (nonatomic) char hasCountOfVisibleGlintsBecam;
@property (readonly, nonatomic) float temperatureCelsiusNecam;
@property (nonatomic) char hasTemperatureCelsiusNecam;
@property (readonly, nonatomic) float temperatureCelsiusBecam;
@property (nonatomic) char hasTemperatureCelsiusBecam;
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
- (id)initWithUserProfileId:(id)a0 eyeSide:(int)a1 pupilSizeCategory:(int)a2 offsetWithinEyeboxX:(id)a3 offsetWithinEyeboxY:(id)a4 offsetWithinEyeboxZ:(id)a5 totalEyeRelief:(id)a6 nearEyeRelief:(id)a7 pupil2dVisibleRatioNecam:(id)a8 pupil2dVisibleRatioBecam:(id)a9 pupilIrisContrastNecam:(id)a10 pupilIrisContrastBecam:(id)a11 countOfVisibleGlintsNecam:(id)a12 countOfVisibleGlintsBecam:(id)a13 temperatureCelsiusNecam:(id)a14 temperatureCelsiusBecam:(id)a15;

@end
