@class NSUserDefaults;

@interface ICNFMCSharedPreferencesController : NSObject

@property (retain, nonatomic) NSUserDefaults *sharedMailUserDefaults;
@property char shouldExpandGroups;
@property char disableRemoteContent;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_postPreferencesDidChangeNotifications;
- (void)_preferencesChangedExternally:(id)a0;

@end
