@interface MERAWProcessingFloatParameter : MERAWProcessingParameter {
    float _neutralValue;
    float _cameraValue;
    char _hasCameraValue;
    char _hasNeutralValue;
}

@property (readonly) float maximumValue;
@property (readonly) float minimumValue;
@property (readonly) float initialValue;
@property float currentValue;

- (char)hasCameraValue:(float *)a0;
- (char)hasNeutralValue:(float *)a0;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(float)a3 maximum:(float)a4 minimum:(float)a5;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(float)a3 maximum:(float)a4 minimum:(float)a5 cameraValue:(float)a6;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(float)a3 maximum:(float)a4 minimum:(float)a5 neutralValue:(float)a6;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(float)a3 maximum:(float)a4 minimum:(float)a5 neutralValue:(float)a6 cameraValue:(float)a7;

@end
