@class NSString, NSNumber, NSDate;

@interface ULOdometryStatus : NSObject

@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSNumber *deltaPositionX;
@property (retain, nonatomic) NSNumber *deltaPositionY;
@property (retain, nonatomic) NSNumber *deltaPositionZ;
@property (retain, nonatomic) NSNumber *alignmentAngleRad;
@property (retain, nonatomic) NSNumber *alignmentAngleErrorEstimateRad;
@property (retain, nonatomic) NSNumber *quaternionX;
@property (retain, nonatomic) NSNumber *quaternionY;
@property (retain, nonatomic) NSNumber *quaternionZ;
@property (retain, nonatomic) NSNumber *quaternionW;
@property (nonatomic) unsigned int sensorID;
@property (retain, nonatomic) NSDate *statusDate;
@property (nonatomic) long long odometrySourceType;

- (void).cxx_destruct;
- (id)initWithOdometrySourceType:(long long)a0 deltaPositionX:(id)a1 deltaPositionY:(id)a2 deltaPositionZ:(id)a3 alignmentAngleRad:(id)a4 alignmentAngleErrorEstimateRad:(id)a5 quaternionX:(id)a6 quaternionY:(id)a7 quaternionZ:(id)a8 quaternionW:(id)a9 date:(id)a10;

@end
