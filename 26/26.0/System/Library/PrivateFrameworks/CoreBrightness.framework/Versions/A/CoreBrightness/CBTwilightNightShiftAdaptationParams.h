@class NSObject, CBFloatArray, CBFloatArray2D;
@protocol OS_os_log;

@interface CBTwilightNightShiftAdaptationParams : NSObject {
    NSObject<OS_os_log> *_log;
    unsigned long long _cctTableSizeOG;
    float *_cctTableOG;
    unsigned long long _twilightStrengthTableSizeOG;
    float *_twilightStrengthTableOG;
    unsigned long long _cctDeltaTableSizeOG;
    float *_cctDeltaTableOG;
}

@property (readonly) CBFloatArray *cctTable;
@property (readonly) CBFloatArray *twilightStrengthTable;
@property (readonly) CBFloatArray2D *cctDeltaTable;

- (void)dealloc;
- (id)initWithParser:(id)a0;
- (BOOL)loadParametersFromParser:(id)a0;

@end
