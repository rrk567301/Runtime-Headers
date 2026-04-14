@class NSUUID;

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding> {
    union { long long integerValue; struct { unsigned char continuousPathState : 4; } fields; } _mask;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int stage;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long pathIndex;
@property (readonly, nonatomic) int fingerID;
@property (readonly, nonatomic) long long forcedKeyCode;
@property (readonly, nonatomic) int continuousPathState;
@property (readonly, copy, nonatomic) NSUUID *touchUUID;

+ (id)touchEventWithStage:(int)a0 location:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2 timestamp:(double)a3 pathIndex:(long long)a4 fingerID:(int)a5 forcedKeyCode:(long long)a6;
+ (id)touchEventWithStage:(int)a0 location:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2 timestamp:(double)a3 pathIndex:(long long)a4 fingerID:(int)a5 forcedKeyCode:(long long)a6 UUID:(id)a7;
+ (id)touchEventWithStage:(int)a0 location:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2 timestamp:(double)a3 pathIndex:(long long)a4 forcedKeyCode:(long long)a5;
+ (id)touchEventWithStage:(int)a0 location:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2 timestamp:(double)a3 pathIndex:(long long)a4 fingerID:(int)a5 forcedKeyCode:(long long)a6 continuousPathState:(int)a7 UUID:(id)a8;
+ (id)touchEventWithStage:(int)a0 location:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2 timestamp:(double)a3 pathIndex:(long long)a4 forcedKeyCode:(long long)a5 UUID:(id)a6;
+ (id)touchEventWithStage:(int)a0 location:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2 timestamp:(double)a3 pathIndex:(long long)a4 fingerID:(int)a5 forcedKeyCode:(long long)a6 continuousPathState:(int)a7;

- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithStage:(int)a0 location:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2 timestamp:(double)a3 pathIndex:(long long)a4 fingerID:(int)a5 forcedKeyCode:(long long)a6 continuousPathState:(int)a7 UUID:(id)a8;

@end
