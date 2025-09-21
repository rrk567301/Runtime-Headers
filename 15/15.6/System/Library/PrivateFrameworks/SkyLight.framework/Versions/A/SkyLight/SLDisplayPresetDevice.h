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
- (unsigned int)activePresetIndex;
- (id)copyCalibrationInfo;
- (id)copyPresetAtIndex:(unsigned int)a0;
- (id)copyPresetDataAtIndex:(unsigned int)a0;
- (id)copyUserAdjustment;
- (id)copyUserAdjustmentData;
- (unsigned int)factoryDefaultPresetIndex;
- (char)factoryResetWithType:(unsigned char)a0;
- (char)invalidateUserAdjustment;
- (char)isPresetValidAtIndex:(unsigned int)a0;
- (char)isPresetWritableAtIndex:(unsigned int)a0;
- (char)isUserAdjustmentSupported;
- (char)isUserAdjustmentValid;
- (id)presetCapabilities;
- (unsigned int)presetCount;
- (char)presetUUIDAtIndex:(unsigned int)a0 toBytes:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } *)a1;
- (char)resetPresetAtIndex:(unsigned int)a0;
- (char)setActivePresetIndex:(unsigned int)a0;
- (char)setPresetAtIndex:(unsigned int)a0 withData:(id)a1;
- (char)setPresetDataAtIndex:(unsigned int)a0 withData:(id)a1;
- (char)setUserAdjustment:(id)a0;
- (char)setUserAdjustmentData:(id)a0;
- (char)_setPresetHIDDataAtIndex:(unsigned int)a0 withData:(id)a1;
- (id)containerId;
- (struct __CFUUID { } *)copyCFContainerId;
- (float)getUserAdjustmentPowerLimit;
- (id)initWithService:(unsigned int)a0;
- (void)tickleTemporaryPowerAssertion:(id)a0;

@end
