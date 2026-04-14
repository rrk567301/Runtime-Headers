@class NSString;

@interface ASDCellularSettings : NSObject {
    NSString *_defaultsKey;
}

@property (nonatomic) BOOL allowAutomaticDownloads;
@property (nonatomic) long long cellularDataPrompt;

+ (id)settingsForIdentity:(id)a0;

- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0;
- (id)initWithDefaultsKey:(id)a0;

@end
