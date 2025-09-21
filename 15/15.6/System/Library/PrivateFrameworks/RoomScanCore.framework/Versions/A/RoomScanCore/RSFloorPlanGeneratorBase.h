@class RSFloorPlanRender;

@interface RSFloorPlanGeneratorBase : NSObject {
    unsigned long long _inputSemanticsVersion;
    BOOL _isDoorWindowEnabled;
}

@property (retain, nonatomic) RSFloorPlanRender *render;

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)inputSemanticsVersion;
- (char)isDoorWindowEnabled;
- (void)setChairBeautificationEnable:(char)a0;
- (void)setDoorWindowEnable:(char)a0;
- (void)setObjectBeautificationEnable:(char)a0;
- (void)setStandardizationEnable:(char)a0;
- (void)setUniformHeightPolygonEnable:(char)a0;

@end
