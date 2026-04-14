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
- (void)refreshPresetState;
- (BOOL)trueToneDisabled;
- (BOOL)nightShiftDisabled;
- (BOOL)autoBrightnessDisabledForDisplay:(unsigned long long)a0;
- (BOOL)brightnessDisabledForDisplay:(unsigned long long)a0;
- (BOOL)referenceMode:(unsigned long long)a0;

@end
