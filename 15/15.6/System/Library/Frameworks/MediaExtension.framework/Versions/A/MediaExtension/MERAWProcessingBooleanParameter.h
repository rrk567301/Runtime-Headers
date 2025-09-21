@interface MERAWProcessingBooleanParameter : MERAWProcessingParameter {
    char _neutralValue;
    char _cameraValue;
    char _hasCameraValue;
    char _hasNeutralValue;
}

@property (readonly) char initialValue;
@property char currentValue;

- (char)hasCameraValue:(char *)a0;
- (char)hasNeutralValue:(char *)a0;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(char)a3;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(char)a3 cameraValue:(char)a4;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(char)a3 neutralValue:(char)a4;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 initialValue:(char)a3 neutralValue:(char)a4 cameraValue:(char)a5;

@end
