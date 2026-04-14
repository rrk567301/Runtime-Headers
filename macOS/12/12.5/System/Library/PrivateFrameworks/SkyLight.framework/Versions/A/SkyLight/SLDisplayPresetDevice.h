@class NSUUID;

@interface SLDisplayPresetDevice : NSObject {
    unsigned int _service;
    unsigned long long _regID;
    char _path[512];
    void *_hidPresetInterface;
    void *_hidManagementInterface;
    void *_hidUserAdjustInterface;
    NSUUID *_containerId;
    struct PresetDeviceFlags { BOOL x0; BOOL x1; } *_fields;
}

+ (float)luminanceCorrectionFactorForWhitepoint:(id)a0;
+ (float)userAdjustmentLuminanceCorrectionFactorForWhitepoint:(id)a0;
+ (id)presetDeviceWithService:(unsigned int)a0;

- (void)dealloc;
- (id)description;
- (id)copyUserAdjustment;
- (BOOL)setUserAdjustment:(id)a0;
- (id)copyUserAdjustmentData;
- (BOOL)setUserAdjustmentData:(id)a0;
- (BOOL)isUserAdjustmentSupported;
- (BOOL)isUserAdjustmentValid;
- (BOOL)invalidateUserAdjustment;
- (BOOL)factoryResetWithType:(unsigned char)a0;
- (id)copyCalibrationInfo;
- (unsigned int)presetCount;
- (unsigned int)factoryDefaultPresetIndex;
- (unsigned int)activePresetIndex;
- (BOOL)setActivePresetIndex:(unsigned int)a0;
- (BOOL)isPresetValidAtIndex:(unsigned int)a0;
- (BOOL)isPresetWritableAtIndex:(unsigned int)a0;
- (BOOL)presetUUIDAtIndex:(unsigned int)a0 toBytes:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } *)a1;
- (id)presetCapabilities;
- (id)copyPresetDataAtIndex:(unsigned int)a0;
- (BOOL)setPresetDataAtIndex:(unsigned int)a0 withData:(id)a1;
- (id)copyPresetAtIndex:(unsigned int)a0;
- (BOOL)setPresetAtIndex:(unsigned int)a0 withData:(id)a1;
- (BOOL)resetPresetAtIndex:(unsigned int)a0;
- (const struct __CFUUID { } *)copyCFContainerId;
- (id)containerId;
- (void)tickleTemporaryPowerAssertion:(id)a0;
- (id)initWithService:(unsigned int)a0;
- (BOOL)_setPresetHIDDataAtIndex:(unsigned int)a0 withData:(id)a1;
- (float)getUserAdjustmentPowerLimit;

@end
