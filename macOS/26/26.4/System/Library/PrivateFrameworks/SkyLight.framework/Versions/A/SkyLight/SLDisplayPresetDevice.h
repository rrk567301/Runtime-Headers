@class NSUUID;

@interface SLDisplayPresetDevice : NSObject {
    unsigned int _service;
    unsigned long long _regID;
    char _path[512];
    void *_hidPresetInterface;
    NSUUID *_containerId;
    struct PresetDeviceFlags { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } *_fields;
    struct ProDisplayController { struct function<NSDictionary *()> { struct __value_func<NSDictionary *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _load_legacy_preset_data; struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _erase_legacy_preset_data; struct function<NSDictionary *()> { struct __value_func<NSDictionary *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _load_legacy_user_adjustment_data; struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _erase_legacy_user_adjustment_data; struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _preset_update_callback; struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _ua_update_callback; struct unique_ptr<SkyLight::ProDisplayLibraryShim, std::default_delete<SkyLight::ProDisplayLibraryShim>> { struct { struct ProDisplayLibraryShim *__ptr_; } ; } _shim; } _proController;
}

+ (float)userAdjustmentLuminanceCorrectionFactorForWhitepoint:(id)a0;
+ (float)luminanceCorrectionFactorForWhitepoint:(id)a0;
+ (id)presetDeviceWithService:(unsigned int)a0;

- (id)containerId;
- (id)initWithService:(unsigned int)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (void)dealloc;
- (BOOL)isUserAdjustmentValidForPreset:(unsigned int)a0;
- (unsigned int)activePresetIndex;
- (id)copyCalibrationInfo;
- (id)copyCustomPresetInfo;
- (id)copyPresetAtIndex:(unsigned int)a0;
- (id)copyPresetDataAtIndex:(unsigned int)a0;
- (id)copyUserAdjustment;
- (id)copyUserAdjustmentData;
- (id)copyUserAdjustmentForPreset:(unsigned int)a0;
- (unsigned int)factoryDefaultPresetIndex;
- (BOOL)factoryResetWithType:(unsigned char)a0;
- (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; })getUserAdjustmentRange:(unsigned int)a0 withInput:(struct { double x0; double x1; double x2; double x3; double x4; double x5; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; })a1;
- (BOOL)invalidateLiveUserAdjustmentForPreset:(unsigned int)a0;
- (BOOL)invalidateUserAdjustment;
- (BOOL)invalidateUserAdjustmentForPreset:(unsigned int)a0;
- (BOOL)isLiveUserAdjustmentSupported;
- (BOOL)isPerPresetUserAdjustmentSupported;
- (BOOL)isPresetValidAtIndex:(unsigned int)a0;
- (BOOL)isPresetWritableAtIndex:(unsigned int)a0;
- (BOOL)isUserAdjustmentSupported;
- (BOOL)isUserAdjustmentValid;
- (BOOL)isUserAdjustmentValidForAnyPreset;
- (unsigned int)presetCount;
- (BOOL)presetUUIDAtIndex:(unsigned int)a0 toBytes:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } *)a1;
- (BOOL)resetPresetAtIndex:(unsigned int)a0;
- (BOOL)setActivePresetIndex:(unsigned int)a0;
- (BOOL)setCustomPresetDataAtIndex:(unsigned int)a0 withData:(id)a1;
- (BOOL)setPresetAtIndex:(unsigned int)a0 withData:(id)a1;
- (BOOL)setPresetDataAtIndex:(unsigned int)a0 withData:(id)a1;
- (BOOL)setUserAdjustment:(id)a0;
- (BOOL)setUserAdjustmentData:(id)a0;
- (BOOL)setUserAdjustmentForPreset:(unsigned int)a0 withData:(id)a1;
- (struct __CFUUID { } *)copyCFContainerId;
- (float)getUserAdjustmentPowerLimit;
- (float)luminanceCorrectionFactorForWhitepoint:(id)a0;
- (id)presetCapabilities;
- (void)resetProController;

@end
