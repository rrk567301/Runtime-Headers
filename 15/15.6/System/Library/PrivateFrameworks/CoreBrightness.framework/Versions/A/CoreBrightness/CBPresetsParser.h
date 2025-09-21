@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface CBPresetsParser : NSObject {
    NSArray *_displayList;
    NSMutableDictionary *_displayPresets;
    NSObject<OS_os_log> *_logHandle;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)setDisplayList:(id)a0;
- (char)autoBrightnessDisabledForDisplay:(unsigned long long)a0;
- (char)brightnessDisabledForDisplay:(unsigned long long)a0;
- (float)maxSDRLuminanceForDisplay:(unsigned long long)a0;
- (char)nightShiftDisabled;
- (char)referenceMode:(unsigned long long)a0;
- (void)refreshPresetState;
- (char)trueToneDisabled;

@end
