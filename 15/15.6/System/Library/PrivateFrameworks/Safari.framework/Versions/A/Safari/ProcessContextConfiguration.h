@class NSString, NSArray, NSNumber;

@interface ProcessContextConfiguration : NSObject

@property (copy, nonatomic) NSString *injectedBundlePath;
@property (nonatomic) char usePerTabWebProcesses;
@property (nonatomic) char useAutomaticWebProcessPrewarming;
@property (nonatomic) char useWebProcessCache;
@property (nonatomic, getter=isPasswordAutoFillAvailable) char passwordAutoFillAvailable;
@property (nonatomic, getter=isAddressBookAutoFillEnabled) char addressBookAutoFillEnabled;
@property (nonatomic) char shouldPerformAutomatedPageLoadTest;
@property (nonatomic) long long pageLoadTestVersion;
@property (nonatomic) double pageLoadTestResourceDelay;
@property (nonatomic) char pageLoadTestShouldTakeScreenshots;
@property (nonatomic) int storageBlockingPolicy;
@property (nonatomic) struct ContextClient { } *client;
@property (nonatomic) struct ContextInjectedBundleClient { } *injectedBundleClient;
@property (nonatomic) struct ContextHistoryClient { } *historyClient;
@property (nonatomic) struct GeolocationProvider { void /* function */ **x0; } *geolocationProvider;
@property (nonatomic) struct UserNotificationProvider { void /* function */ **x0; } *notificationProvider;
@property (nonatomic, getter=isCreditCardAutoFillEnabled) char creditCardAutoFillEnabled;
@property (nonatomic, getter=isJITEnabled) char JITEnabled;
@property (copy, nonatomic) NSArray *additionalReadAccessAllowedPaths;
@property (nonatomic, getter=isABTestingEnabled) char abTestingEnabled;
@property (copy, nonatomic) NSNumber *trialABGroupIdentifier;

- (void).cxx_destruct;
- (id)initWithInjectedBundlePath:(id)a0 client:(struct ContextClient { } *)a1 injectedBundleClient:(struct ContextInjectedBundleClient { } *)a2;

@end
