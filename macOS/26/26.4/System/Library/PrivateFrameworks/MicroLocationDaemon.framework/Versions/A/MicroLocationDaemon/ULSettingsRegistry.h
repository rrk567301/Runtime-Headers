@class NSMutableSet;

@interface ULSettingsRegistry : NSObject

@property (retain, nonatomic) NSMutableSet *settingNames;

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (BOOL)checkSetting:(id)a0;
- (BOOL)registerSetting:(id)a0;

@end
