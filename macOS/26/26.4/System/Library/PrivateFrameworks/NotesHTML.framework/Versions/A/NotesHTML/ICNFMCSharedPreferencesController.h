@class NSUserDefaults;

@interface ICNFMCSharedPreferencesController : NSObject

@property (retain, nonatomic) NSUserDefaults *sharedMailUserDefaults;
@property BOOL shouldExpandGroups;
@property BOOL disableRemoteContent;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_postPreferencesDidChangeNotifications;
- (void)_preferencesChangedExternally:(id)a0;

@end
