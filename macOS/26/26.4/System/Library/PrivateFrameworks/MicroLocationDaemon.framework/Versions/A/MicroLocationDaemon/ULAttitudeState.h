@class NSNumber;

@interface ULAttitudeState : NSObject

@property (retain, nonatomic) NSNumber *quaternionX;
@property (retain, nonatomic) NSNumber *quaternionY;
@property (retain, nonatomic) NSNumber *quaternionZ;
@property (retain, nonatomic) NSNumber *quaternionW;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long gtbtimestamp;

- (void).cxx_destruct;
- (id)initWithQuaternionX:(id)a0 quaternionY:(id)a1 quaternionZ:(id)a2 quaternionW:(id)a3 timestamp:(double)a4 gtbtimestamp:(unsigned long long)a5;

@end
