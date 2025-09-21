@interface CTDataStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char newRadioCoverage;
@property (readonly, nonatomic) char newRadioSaCoverage;
@property (readonly, nonatomic) char newRadioNsaCoverage;
@property (readonly, nonatomic) char newRadioDataBearer;
@property (readonly, nonatomic) char newRadioSaDataBearer;
@property (readonly, nonatomic) char newRadioNsaDataBearer;
@property (readonly, nonatomic) char newRadioMmWaveDataBearer;
@property (readonly, nonatomic) char newRadioSub6DataBearer;
@property (nonatomic) char attached;
@property (nonatomic) char dataSim;
@property (nonatomic) int indicator;
@property (nonatomic) int indicatorOverride;
@property (nonatomic) char roamAllowed;
@property (nonatomic) int radioTechnology;
@property (nonatomic) int dataMode;
@property (nonatomic) int dataBearerTechnology;
@property (nonatomic) unsigned int dataBearerSoMask;
@property (nonatomic) char dataPlanSignalingReductionOverride;
@property (nonatomic) char cellularDataPossible;
@property (nonatomic) unsigned int activeContexts;
@property (nonatomic) unsigned int totalActiveContexts;
@property (nonatomic) char inHomeCountry;
@property (nonatomic) int reason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyBasic;

@end
