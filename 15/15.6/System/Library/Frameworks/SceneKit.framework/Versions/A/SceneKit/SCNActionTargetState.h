@interface SCNActionTargetState : NSObject

@property (nonatomic) struct SCNVector3 { double x; double y; double z; } position;
@property (nonatomic) struct SCNVector3 { double x; double y; double z; } euler;
@property (nonatomic) struct SCNVector3 { double x; double y; double z; } scale;
@property (nonatomic) struct SCNVector4 { double x; double y; double z; double w; } rotation;
@property (nonatomic) char usesEuler;
@property (nonatomic) float opacity;

@end
