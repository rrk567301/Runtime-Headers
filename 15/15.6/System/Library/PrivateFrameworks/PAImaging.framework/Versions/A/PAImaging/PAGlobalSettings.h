@class NSNumber, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PAGlobalSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

@property (class, retain) NSNumber *mainViewerMaxFramerate;
@property (class) char disableSmartToneAutoCalc;
@property (class) char disableSmartColorAutoCalc;
@property (class) char disableSmartBlackAndWhiteAutoCalc;
@property (class) char disableWhiteBalanceAutoCalc;
@property (class) char disableLevelsAutoCalc;
@property (class) char disableCurvesAutoCalc;
@property (class) char disableRedEyeAutoCalc;
@property (class) char disableBackfillRender;
@property (class) char disableBackfillPreviewRender;
@property (class) char disableZoomRender;
@property (class) char disableZoomPreviewRender;

+ (void)reset;
+ (id)globalSettings;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (char)boolSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)_settingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (double)doubleSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (long long)integerSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)settingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)stringSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)urlSettingForKey:(id)a0 defaultValue:(id /* block */)a1;

@end
