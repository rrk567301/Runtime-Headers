@class NSString, NSNumber, NSDate;

@interface ULOdometryStatus : NSObject

@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSNumber *deltaPositionX;
@property (retain, nonatomic) NSNumber *deltaPositionY;
@property (retain, nonatomic) NSNumber *deltaPositionZ;
@property (retain, nonatomic) NSDate *statusDate;
@property (nonatomic) long long odometrySourceType;

- (void).cxx_destruct;
- (id)initWithDeviceIdentifier:(id)a0 odometrySourceType:(long long)a1 deltaPositionX:(id)a2 deltaPositionY:(id)a3 deltaPositionZ:(id)a4 date:(id)a5;

@end
