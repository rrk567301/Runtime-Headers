@class NSUserDefaults, NSString, NSArray;
@protocol EFCancelable;

@interface MCSharedPreferencesController : NSObject

@property (class, readonly) MCSharedPreferencesController *sharedInstance;

@property (retain, nonatomic) NSUserDefaults *sharedMailUserDefaults;
@property (retain, nonatomic) id<EFCancelable> cancelable;
@property (retain) NSString *defaultFromAddress;
@property char shouldExpandGroups;
@property long long addressDisplayMode;
@property (retain) NSArray *intranetDomains;
@property char shouldCheckIntranetDomains;
@property (readonly) char intranetDomainsManagedByProfile;
@property char isTrackingProtectionEnabled;
@property char disableRemoteContent;
@property char loadRemoteContentWithProxy;
@property (readonly) char shouldPresentRemoteContentOptionsSheet;
@property (readonly) char shouldPresentRemoteContentAlert;
@property (readonly) unsigned long long remoteContentOptions;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)test_resetSharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_postInProcessNotification;
- (void)_postPreferencesDidChangeNotifications;
- (void)_preferencesChangedExternally:(id)a0;
- (void)setLoadRemoteContent:(unsigned long long)a0;
- (void)setShouldPresentRemoteContentAlertAfter:(id)a0;

@end
