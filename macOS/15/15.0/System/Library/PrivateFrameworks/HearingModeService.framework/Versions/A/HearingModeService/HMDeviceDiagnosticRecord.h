@class NSString, NSNumber, NSDate;

@interface HMDeviceDiagnosticRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bluetoothAddress;
@property (readonly, copy, nonatomic) NSString *bluetoothUUID;
@property (readonly, nonatomic) NSNumber *daysSinceLastMeasurementLeft;
@property (readonly, nonatomic) NSNumber *daysSinceLastMeasurementRight;
@property (readonly, nonatomic) NSNumber *daysSinceLastHarmonicMeasurementLeft;
@property (readonly, nonatomic) NSNumber *daysSinceLastHarmonicMeasurementRight;
@property (readonly, nonatomic) int errMicStatusLeft;
@property (readonly, nonatomic) int errMicStatusRight;
@property (readonly, nonatomic) int frontVentStatusLeft;
@property (readonly, nonatomic) int frontVentStatusRight;
@property (readonly, nonatomic) int generalSystemStatusLeft;
@property (readonly, nonatomic) int generalSystemStatusRight;
@property (readonly, nonatomic) NSDate *lastMeasurementTimestampLeft;
@property (readonly, nonatomic) NSDate *lastMeasurementTimestampRight;
@property (readonly, nonatomic) int latestMeasurementResultLeft;
@property (readonly, nonatomic) int latestMeasurementResultRight;
@property (readonly, nonatomic) int rearVentStatusLeft;
@property (readonly, nonatomic) int rearVentStatusRight;
@property (readonly, nonatomic) int refMicStatusLeft;
@property (readonly, nonatomic) int refMicStatusRight;
@property (readonly, nonatomic) int speakerStatusLeft;
@property (readonly, nonatomic) int speakerStatusRight;
@property (readonly, nonatomic) int vceMicStatusLeft;
@property (readonly, nonatomic) int vceMicStatusRight;
@property (readonly, nonatomic) NSNumber *version;

+ (int)getHMDiagnosticMeasurementStatusForValue:(unsigned char)a0;
+ (int)getHMDiagnosticStatusForValue:(unsigned char)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (void)updateWithDiagnosticData:(id)a0;
- (void)updateWithHMDeviceRecord:(id)a0;
- (void)updateWithMeasurementDataVersion2:(id)a0;
- (void)updateWithMeasurementDataVersion3:(id)a0;
- (void)updateWithMeasurementResultLeft:(unsigned int)a0 measurementResultRight:(unsigned int)a1;

@end
