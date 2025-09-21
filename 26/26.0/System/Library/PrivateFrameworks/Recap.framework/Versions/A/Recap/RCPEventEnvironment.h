@class NSString, NSArray;

@interface RCPEventEnvironment : NSObject <NSCoding, RCPMachTimestampProvider>

@property (nonatomic) long long machTimeDenominator;
@property (nonatomic) long long machTimeNumerator;
@property (nonatomic) double startTimeAsIntervalSince1970;
@property (nonatomic) unsigned long long startTimeAsMachTimestamp;
@property (nonatomic) double timeScale;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSString *recapVersion;
@property (nonatomic) long long homeButtonHardware;
@property (nonatomic) BOOL isSimulator;
@property (retain, nonatomic) NSArray *screens;
@property (nonatomic) int touchScanRate;
@property (nonatomic) int pointerScanRate;

+ (id)currentEnvironment;

- (BOOL)hasAbsoluteTimeCorrelation;
- (double)timeIntervalSince1970ForMachAbsoluteTime:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)timeDescriptionForEvent:(id)a0;
- (unsigned long long)machAbsoluteTimeForTimeInterval:(double)a0;
- (id)init;
- (unsigned long long)machAbsoluteTimeForTimeIntervalSince1970:(double)a0;
- (id)description;
- (void)setStartDate:(id)a0 machAbsoluteTime:(unsigned long long)a1;
- (double)speedFactorToAdjustRecordingEnvironment:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_buttonConfigurationDescription;
- (double)timeIntervalForMachAbsoluteTime:(unsigned long long)a0;

@end
