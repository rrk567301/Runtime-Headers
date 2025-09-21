@class NSMutableArray;

@interface MPDisplayModeBucket : NSObject {
    float _minHeight;
    float _maxHeight;
    float _targetHeight;
    char _usePreciseRate;
    NSMutableArray *_modes;
}

- (void)dealloc;
- (id)lowMode;
- (char)modeFitsBucket:(id)a0;
- (char)addModeToBucket:(id)a0;
- (id)bestMode;
- (id)bestModeForNativeHeight:(float)a0;
- (id)highMode;
- (id)initWithMinHeight:(float)a0 maxHeight:(float)a1 targetHeight:(float)a2 usingPreciseRate:(char)a3;

@end
