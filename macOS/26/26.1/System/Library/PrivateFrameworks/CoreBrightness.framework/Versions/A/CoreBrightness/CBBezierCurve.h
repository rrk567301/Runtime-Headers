@class NSString;

@interface CBBezierCurve : NSObject <CBCurveShape> {
    float bezierAnchors[3];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)interpolateProgress:(float)a0 from:(float)a1 toEnd:(float)a2;
- (id)initWithAnchors:(id)a0;

@end
