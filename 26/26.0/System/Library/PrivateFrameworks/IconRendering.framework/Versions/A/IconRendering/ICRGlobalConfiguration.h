@class NSNumber, CUIEncapsulationShape;

@interface ICRGlobalConfiguration : NSObject {
    void /* unknown type, empty encoding */ globalConfiguration;
}

@property (nonatomic) double lightAngle;
@property (nonatomic) double lightIntensity;
@property (nonatomic) struct { double x0; double x1; } lightAngles;
@property (nonatomic) struct { double x0; double x1; double x2; } lightDirection;
@property (nonatomic) BOOL effectsAreEnabled;
@property (nonatomic, retain) NSNumber *relativeIconInset;
@property (nonatomic, retain) NSNumber *chicletDropShadow;
@property (nonatomic, retain) CUIEncapsulationShape *encapsulationShape;

- (id)init;
- (void).cxx_destruct;

@end
