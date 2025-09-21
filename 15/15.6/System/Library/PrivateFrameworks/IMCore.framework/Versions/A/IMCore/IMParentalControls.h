@class NSMutableDictionary;

@interface IMParentalControls : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_parentalControls;
@property (readonly, nonatomic) char _disableAV;
@property (readonly, nonatomic) char _forceChatLogging;
@property (readonly, nonatomic) char active;
@property (readonly, nonatomic) char disableAV;
@property (readonly, nonatomic) char forceChatLogging;
@property (nonatomic) char shouldPostNotifications;

+ (id)objectForKey:(id)a0;
+ (id)standardControls;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)disableService:(id)a0;
- (char)disableAccount:(id)a0;
- (void)_managedPrefsNotification:(id)a0;
- (id)_serviceWithName:(id)a0;
- (void)_updateParentalSettings;
- (char)accountHasAllowlist:(id)a0;
- (char)accountIsEnabled:(id)a0;
- (id)allowlistForAccount:(id)a0;
- (id)allowlistForService:(id)a0;
- (char)forceAllowlistForAccount:(id)a0;
- (char)forceAllowlistForService:(id)a0;
- (char)okToConnectAccount:(id)a0;

@end
