@class NSUserDefaults;

@interface DCSettings : NSObject

@property (retain) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) double imageQuality;

+ (id)sharedSettings;
+ (BOOL)_isSolariumEnabled;

- (void).cxx_destruct;
- (id)init;

@end
