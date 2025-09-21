@class NSString;

@interface CBLinearCurve : NSObject <CBCurveShape>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (float)interpolateProgress:(float)a0 from:(float)a1 toEnd:(float)a2;

@end
