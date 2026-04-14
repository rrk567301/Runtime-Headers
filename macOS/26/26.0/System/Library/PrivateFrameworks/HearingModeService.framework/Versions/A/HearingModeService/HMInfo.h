@class NSNumber;

@interface HMInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *transparencyModeLowerBound;
@property (readonly, nonatomic) NSNumber *transparencyModeUpperBound;
@property (readonly, nonatomic) NSNumber *transparencyModeHours;
@property (readonly, nonatomic) NSNumber *transparencyModeDays;
@property (readonly, nonatomic) NSNumber *adaptiveModeLowerBound;
@property (readonly, nonatomic) NSNumber *adaptiveModeUpperBound;
@property (readonly, nonatomic) NSNumber *adaptiveModeHours;
@property (readonly, nonatomic) NSNumber *adaptiveModeDays;
@property (readonly, nonatomic) NSNumber *noiseCancellationModeLowerBound;
@property (readonly, nonatomic) NSNumber *noiseCancellationModeUpperBound;
@property (readonly, nonatomic) NSNumber *noiseCancellationModeHours;
@property (readonly, nonatomic) NSNumber *noiseCancellationModeDays;
@property (readonly, nonatomic) NSNumber *noiseReductionRating;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setConstantsWith:(unsigned int)a0;

@end
