@class NSNumber;

@interface ULOdometryState : NSObject

@property (retain, nonatomic) NSNumber *deltaPositionX;
@property (retain, nonatomic) NSNumber *deltaPositionY;
@property (retain, nonatomic) NSNumber *deltaPositionZ;
@property (retain, nonatomic) NSNumber *alignmentAngleRad;
@property (retain, nonatomic) NSNumber *alignmentAngleErrorEstimateRad;
@property (retain, nonatomic) NSNumber *quaternionX;
@property (retain, nonatomic) NSNumber *quaternionY;
@property (retain, nonatomic) NSNumber *quaternionZ;
@property (retain, nonatomic) NSNumber *quaternionW;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)initWithDeltaPositionX:(id)a0 deltaPositionY:(id)a1 deltaPositionZ:(id)a2 alignmentAngleRad:(id)a3 alignmentAngleErrorEstimateRad:(id)a4 quaternionX:(id)a5 quaternionY:(id)a6 quaternionZ:(id)a7 quaternionW:(id)a8 timestamp:(double)a9;

@end
