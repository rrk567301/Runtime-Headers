@class NSUserDefaults;

@interface DCSettings : NSObject

@property (retain) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) double imageQuality;

+ (id)sharedSettings;
+ (BOOL)_isSolariumEnabled;

- (id)init;
- (void).cxx_destruct;

@end
