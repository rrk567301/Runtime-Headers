@class NSString;

@interface CBAudioLinkQualityInfo : NSObject <CUXPCCodable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char aosState;
@property (nonatomic) unsigned int bitRate;
@property (nonatomic) unsigned char btBand;
@property (nonatomic) char codecType;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) double jitterBufferSeconds;
@property (nonatomic) char noiseFloor90;
@property (nonatomic) double retransmitRate;
@property (nonatomic) char rssiAverage;
@property (nonatomic) char signalToNoiseRatio;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (void)encodeWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
