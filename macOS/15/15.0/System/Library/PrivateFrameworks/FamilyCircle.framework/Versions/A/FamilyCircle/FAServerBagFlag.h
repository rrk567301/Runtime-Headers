@class NSString;

@interface FAServerBagFlag : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) BOOL value;

+ (id)megadomeKillSwitch;
+ (id)registerDeviceWithPDS;

- (void)grabFromServer;
- (id)initWithServerKey:(id)a0;
- (BOOL)isEnabledWithForceRefresh:(BOOL)a0;

@end
