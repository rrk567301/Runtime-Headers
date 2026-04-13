@class NSString, NSArray;

@interface ProcessContextConfiguration : NSObject

@property (copy, nonatomic) NSString *injectedBundlePath;
@property (nonatomic) BOOL usePerTabWebProcesses;
@property (nonatomic) BOOL useAutomaticWebProcessPrewarming;
@property (nonatomic) BOOL useWebProcessCache;
@property (nonatomic, getter=isPasswordAutoFillAvailable) BOOL passwordAutoFillAvailable;
@property (nonatomic, getter=isAddressBookAutoFillEnabled) BOOL addressBookAutoFillEnabled;
@property (nonatomic) BOOL shouldPerformAutomatedPageLoadTest;
@property (nonatomic) long long pageLoadTestVersion;
@property (nonatomic) double pageLoadTestResourceDelay;
@property (nonatomic) BOOL pageLoadTestShouldTakeScreenshots;
@property (nonatomic) int storageBlockingPolicy;
@property (nonatomic) struct ContextClient { } *client;
@property (nonatomic) struct ContextInjectedBundleClient { } *injectedBundleClient;
@property (nonatomic) struct ContextHistoryClient { } *historyClient;
@property (nonatomic) struct GeolocationProvider { void /* function */ **x0; } *geolocationProvider;
@property (nonatomic) struct UserNotificationProvider { void /* function */ **x0; } *notificationProvider;
@property (nonatomic, getter=isCreditCardAutoFillEnabled) BOOL creditCardAutoFillEnabled;
@property (copy, nonatomic) NSArray *additionalReadAccessAllowedPaths;

- (void).cxx_destruct;
- (id)initWithInjectedBundlePath:(id)a0 client:(struct ContextClient { } *)a1 injectedBundleClient:(struct ContextInjectedBundleClient { } *)a2;

@end
