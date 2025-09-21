@class NSArray;

@interface MERAWProcessingListParameter : MERAWProcessingParameter {
    long long _neutralValue;
    long long _cameraValue;
    char _hasCameraValue;
    char _hasNeutralValue;
}

@property (readonly) NSArray *listElements;
@property (readonly) long long initialValue;
@property long long currentValue;

- (void).cxx_destruct;
- (char)hasCameraValue:(long long *)a0;
- (char)hasNeutralValue:(long long *)a0;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 list:(id)a3 initialValue:(long long)a4;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 list:(id)a3 initialValue:(long long)a4 cameraValue:(long long)a5;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 list:(id)a3 initialValue:(long long)a4 neutralValue:(long long)a5;
- (id)initWithName:(id)a0 key:(id)a1 description:(id)a2 list:(id)a3 initialValue:(long long)a4 neutralValue:(long long)a5 cameraValue:(long long)a6;

@end
