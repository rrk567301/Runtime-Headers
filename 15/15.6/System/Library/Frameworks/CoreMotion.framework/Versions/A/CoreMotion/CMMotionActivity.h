@class NSDate;

@interface CMMotionActivity : CMLogItem {
    struct CLMotionActivity { int type; int confidence; int source; int mountedState; int mountedConfidence; int conservativeMountedState; double conservativeMountedProbability; BOOL isStanding; float tilt; double timestamp; BOOL isVehicleConnected; int exitState; double estExitTime; int vehicleType; struct FsmTransitionData { unsigned char fFsmFromToStates; unsigned char fFsmStateTransEvent; unsigned char fFsmGuards; unsigned short fConsecStatic; } fsmTransitionData; void /* unknown type, blank encoding */ vehicleProbabilityShortTermMean; double startTime; int rawType; int rawConfidence; struct { unsigned char motionHint : 1; unsigned char gpsHint : 1; unsigned char basebandHint : 1; unsigned char wifiHint : 1; unsigned char btHint : 1; } vehicularFlags; int vehicularConfidence; int workoutDetectionType; double workoutDetectionTime; unsigned long long workoutEscalationTime; int typeYouth; } fState;
    double fEndTime;
}

@property char isRunWalk;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic, getter=isVehicleConnected) char vehicleConnected;
@property (readonly, nonatomic, getter=isVehicleWifiHint) char vehicleWifiHint;
@property (readonly, nonatomic, getter=isVehicleGpsHint) char vehicleGpsHint;
@property (readonly, nonatomic, getter=isVehicleBasebandHint) char vehicleBasebandHint;
@property (readonly, nonatomic, getter=isVehicleMotionHint) char vehicleMotionHint;
@property (readonly, nonatomic, getter=isVehicleBTHint) char vehicleBTHint;
@property (readonly, nonatomic, getter=isMounted) char mounted;
@property (readonly, nonatomic) double mountedProbability;
@property (readonly, nonatomic) long long vehicleType;
@property (readonly, nonatomic) long long confidence;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) char unknown;
@property (readonly, nonatomic) char stationary;
@property (readonly, nonatomic) char walking;
@property (readonly, nonatomic) char running;
@property (readonly, nonatomic) char automotive;
@property (readonly, nonatomic) char cycling;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEndTime:(double)a0;
- (struct CLMotionActivity { int x0; int x1; int x2; int x3; int x4; int x5; double x6; BOOL x7; float x8; double x9; BOOL x10; int x11; double x12; int x13; struct FsmTransitionData { unsigned char x0; unsigned char x1; unsigned char x2; unsigned short x3; } x14; void /* unknown type, blank encoding */ x15; double x16; int x17; int x18; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x19; int x20; int x21; double x22; unsigned long long x23; int x24; } *)motionActivity;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x0; int x1; int x2; int x3; int x4; int x5; double x6; BOOL x7; float x8; double x9; BOOL x10; int x11; double x12; int x13; struct FsmTransitionData { unsigned char x0; unsigned char x1; unsigned char x2; unsigned short x3; } x14; void /* unknown type, blank encoding */ x15; double x16; int x17; int x18; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x19; int x20; int x21; double x22; unsigned long long x23; int x24; })a0 endDate:(id)a1;
- (id)descriptionInternal;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x0; int x1; int x2; int x3; int x4; int x5; double x6; BOOL x7; float x8; double x9; BOOL x10; int x11; double x12; int x13; struct FsmTransitionData { unsigned char x0; unsigned char x1; unsigned char x2; unsigned short x3; } x14; void /* unknown type, blank encoding */ x15; double x16; int x17; int x18; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x19; int x20; int x21; double x22; unsigned long long x23; int x24; })a0;
- (char)isSameStateAs:(id)a0;

@end
