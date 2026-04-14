@class NSString, NSNumber;

@interface ULAltitudeState : NSObject

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSNumber *altitudeMeters;
@property (readonly, nonatomic) NSNumber *accuracyMeters;
@property (readonly, nonatomic) NSNumber *precisionMeters;
@property (readonly, nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)initWithDeviceIdentifier:(id)a0 altitudeMeters:(id)a1 accuracyMeters:(id)a2 precisionMeters:(id)a3 timestamp:(double)a4;

@end
