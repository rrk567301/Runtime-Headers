@class NSMutableSet;

@interface ULSettingsRegistry : NSObject

@property (retain, nonatomic) NSMutableSet *settingNames;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)checkSetting:(id)a0;
- (BOOL)registerSetting:(id)a0;

@end
