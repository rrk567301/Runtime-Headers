@class NSObject;
@protocol OS_os_log;

@interface PILABCurve : NSObject {
    float _currentLux;
    float _mappedNits;
    float _minNits;
    float _maxNits;
    float **_luxToNits;
    unsigned int _luxToNitsTableSize;
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly) unsigned long long version;

- (void)dealloc;
- (id)description;
- (id)initWithConfiguration:(id)a0;
- (float)getNits;
- (BOOL)setLux:(float)a0;
- (float)getLux;
- (float)getMaxNits;
- (float)getMinNits;
- (BOOL)initialiseCurveFrom:(id)a0;
- (void)initialiseToDefault;
- (void)setLinearBrightnessMin:(float)a0 andMax:(float)a1;

@end
