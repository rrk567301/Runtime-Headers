@class NSString;

@interface SRWristDetection : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL onWrist;
@property long long wristLocation;
@property long long crownOrientation;
@property double cfOnWristDate;
@property double cfOffWristDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)binarySampleRepresentation;
- (id)sr_dictionaryRepresentation;
- (id)initWithCFOnWristDate:(double)a0 CFOffWristDate:(double)a1 onWrist:(BOOL)a2 wristLocation:(long long)a3 crownOrientation:(long long)a4;
- (id)initWithOnWristDate:(id)a0 offWristDate:(id)a1 onWrist:(BOOL)a2 wristLocation:(long long)a3 crownOrientation:(long long)a4;
- (id)_onWristDate;
- (id)_offWristDate;

@end
