@class NSObject, CBFloatArray, CBPILParams;
@protocol OS_os_log;

@interface PILABCurve : NSObject {
    float _currentLux;
    float _mappedNits;
    float _minNits;
    float _maxNits;
    CBFloatArray *_pilCurveLux;
    CBFloatArray *_pilCurveNits;
    unsigned long long _luxToNitsTableSize;
    CBPILParams *_params;
    NSObject<OS_os_log> *_logHandle;
}

- (void)dealloc;
- (float)getNits;
- (id)initWithParams:(id)a0;
- (BOOL)setLux:(float)a0;
- (float)getLux;
- (float)getMaxNits;
- (float)getMinNits;
- (BOOL)initialiseCurveFrom:(id)a0;
- (void)initialiseToDefault;

@end
