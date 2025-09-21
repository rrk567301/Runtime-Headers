@class NSString;

@interface BUCellularSettings : NSObject {
    NSString *_defaultsKey;
}

@property (nonatomic) char allowAutomaticDownloads;
@property (readonly, nonatomic) char legacyAllowAutomaticDownloads;
@property (nonatomic) long long cellularDataPrompt;

+ (id)settingsForIdentity:(id)a0;
+ (char)shouldShowCellularAutomaticDownloadsSwitch;

- (void).cxx_destruct;
- (id)initWithDefaultsKey:(id)a0;
- (id)_cellularSettings;

@end
