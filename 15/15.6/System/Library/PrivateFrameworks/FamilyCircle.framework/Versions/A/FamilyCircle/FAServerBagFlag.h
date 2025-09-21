@class NSString;

@interface FAServerBagFlag : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) char value;
@property (nonatomic) long long intValue;

+ (id)megadomeKillSwitch;
+ (id)memberPhotoRequest404CacheDurationHours;
+ (id)registerDeviceWithPDS;

- (long long)getCacheDurationforMemberPhoto404Response:(char)a0;
- (void)grabFromServer;
- (id)initWithServerKey:(id)a0;
- (char)isEnabledWithForceRefresh:(char)a0;

@end
