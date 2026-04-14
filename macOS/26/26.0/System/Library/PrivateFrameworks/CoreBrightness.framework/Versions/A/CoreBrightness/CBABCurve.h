@class CBABCurveConfiguration, NSObject;
@protocol OS_os_log;

@interface CBABCurve : NSObject {
    CBABCurveConfiguration *config;
    struct { float bl1; float bl2; float e1; float e2; float eThresh; } pref;
    float minimumBrightness;
    float maximumBrightness;
    float currentLux;
    float mappedBrightness;
    BOOL shouldClampLowLux;
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly) unsigned long long version;
@property float scaleFactor;

- (void)dealloc;
- (id)initWithUUID:(id)a0;
- (id)description;
- (id)initWithConfiguration:(id)a0;
- (BOOL)setLux:(float)a0;
- (id)copyUserPrefState;
- (float)getLinearBrightness;
- (float)getLux;
- (float)getScaledBL1;
- (float)getScaledBL2;
- (id)initWithUUID:(id)a0 vendorID:(id)a1 andProductID:(id)a2;
- (struct { float x0; float x1; float x2; float x3; float x4; })provideDefaultPreferencesWithConfiguration:(id)a0;
- (void)resetToDefaultState;
- (void)setLinearBrightnessMin:(float)a0 andMax:(float)a1;
- (void)setSavedPrefences:(id)a0;
- (void)setScaledBL1:(float)a0;
- (void)setScaledBL2:(float)a0;
- (void)updateALSParametersForDisplayBrightness:(float)a0;

@end
