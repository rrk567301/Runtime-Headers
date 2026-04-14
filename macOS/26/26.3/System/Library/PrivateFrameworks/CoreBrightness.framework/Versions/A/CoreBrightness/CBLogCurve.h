@class NSString;

@interface CBLogCurve : NSObject <CBCurveShape>

@property (readonly) float base;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)curveWithBase:(float)a0;

- (id)initWithBase:(float)a0;
- (float)interpolateProgress:(float)a0 from:(float)a1 toEnd:(float)a2;

@end
