@class RWIBaseManager, NSArray, RWIServiceConnection, NSString, NSImage, NSMutableDictionary;
@protocol RWITargetDelegate;

@interface RWITarget : NSObject {
    NSMutableDictionary *_applications;
    NSMutableDictionary *_drivers;
    char _wantsAutomaticInspectionEnabled;
}

@property (readonly, nonatomic) RWIBaseManager *manager;
@property (retain, nonatomic) RWIServiceConnection *connection;
@property (readonly, nonatomic) NSArray *allApplications;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char supportsRemoteWebInspector;
@property (nonatomic) long long readyState;
@property (readonly, nonatomic) NSString *loggingIdentifier;
@property (weak, nonatomic) id<RWITargetDelegate> delegate;
@property (readonly, nonatomic, getter=isCapable) char capable;
@property (readonly, nonatomic) char supportsWebDriver;
@property (readonly, nonatomic) char supportsApplicationIcons;
@property (readonly, nonatomic) char isReady;
@property (readonly, nonatomic) char isIOS;
@property (readonly, nonatomic) char isDevice;
@property (readonly, nonatomic) char isSimulator;
@property (readonly, nonatomic) char isMachine;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *udid;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, copy, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSArray *applications;
@property (readonly, nonatomic) NSArray *activeApplications;
@property (readonly, nonatomic) NSArray *drivers;
@property (readonly, nonatomic) long long deviceClass;
@property (readonly, nonatomic) NSImage *icon;
@property (readonly, nonatomic) NSImage *symbolImage;
@property (nonatomic) char automaticInspectionEnabled;
@property (readonly, nonatomic) long long automationAvailability;

- (id)description;
- (void).cxx_destruct;
- (id)allApplications;
- (char)isReady;
- (id)initWithManager:(id)a0;
- (void)addApplication:(id)a0;
- (void)removeApplication:(id)a0;
- (char)isDevice;
- (char)isSimulator;
- (char)isIOS;
- (id)activeApplications;
- (long long)compareForDisplayWith:(id)a0;
- (char)isMachine;
- (void)addDriver:(id)a0;
- (id)applicationWithIdentifier:(id)a0;
- (id)driverWithIdentifier:(id)a0;
- (id)initWithUDID:(id)a0 name:(id)a1 manager:(id)a2;
- (void)inspectAutomaticInspectionCandidate:(id)a0 pauseImmediately:(char)a1;
- (void)launchOrActivateApplicationWithBundleIdentifier:(id)a0;
- (void)markAsHavingBasicInformation;
- (void)removeDriver:(id)a0;
- (void)setName:(id)a0 udid:(id)a1 buildVersion:(id)a2 productVersion:(id)a3 supportsRemoteWebInspector:(char)a4;
- (void)shouldAcceptAutomaticInspectionCandidate:(id)a0 completionHandler:(id /* block */)a1;
- (void)targetStateChanged;

@end
