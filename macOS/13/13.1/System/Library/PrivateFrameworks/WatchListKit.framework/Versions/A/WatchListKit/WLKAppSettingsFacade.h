@class WLKAppSettings;

@interface WLKAppSettingsFacade : NSObject {
    WLKAppSettings *_settings;
}

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (id)settings;
- (id)accessStatus;
- (void)setAccessStatus:(id)a0;

@end
