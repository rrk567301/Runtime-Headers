@class NSString, NSNumber, NSDate;

@interface ULAltitudeStatus : NSObject

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSNumber *altitudeMeters;
@property (readonly, nonatomic) NSNumber *accuracyMeters;
@property (readonly, nonatomic) NSNumber *precisionMeters;
@property (readonly, nonatomic) NSDate *statusDate;

- (void).cxx_destruct;
- (id)initWithDeviceIdentifier:(id)a0 altitudeMeters:(id)a1 accuracyMeters:(id)a2 precisionMeters:(id)a3 date:(id)a4;

@end
