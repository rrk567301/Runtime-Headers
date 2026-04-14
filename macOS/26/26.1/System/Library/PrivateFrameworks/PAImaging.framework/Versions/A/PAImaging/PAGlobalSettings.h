@class NSNumber, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PAGlobalSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

@property (class, retain) NSNumber *mainViewerMaxFramerate;
@property (class) BOOL disableSmartToneAutoCalc;
@property (class) BOOL disableSmartColorAutoCalc;
@property (class) BOOL disableSmartBlackAndWhiteAutoCalc;
@property (class) BOOL disableWhiteBalanceAutoCalc;
@property (class) BOOL disableLevelsAutoCalc;
@property (class) BOOL disableCurvesAutoCalc;
@property (class) BOOL disableRedEyeAutoCalc;
@property (class) BOOL disableBackfillRender;
@property (class) BOOL disableBackfillPreviewRender;
@property (class) BOOL disableZoomRender;
@property (class) BOOL disableZoomPreviewRender;

+ (id)globalSettings;
+ (void)reset;

- (id)stringSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)urlSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (void)reset;
- (id)_settingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (long long)integerSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)settingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (double)doubleSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)boolSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)init;

@end
