@class TPSInstalledAppInfo;

@interface TPSInstalledAppsValidation : TPSTargetingValidation

@property (retain, nonatomic) TPSInstalledAppInfo *appInfo;

- (void).cxx_destruct;
- (id)description;
- (id)initWithInstalledAppInfo:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
