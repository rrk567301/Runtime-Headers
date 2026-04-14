@class NSArray, NSXPCConnection, NSMutableDictionary, NSSet, NSObject, NSString;
@protocol OS_dispatch_queue, CPSStatusInformation;

@interface CPSConfigurationClient : NSObject <CPSConfigurationServiceClient>

@property (retain, nonatomic) NSObject<CPSStatusInformation> *cachedStatusInformation;
@property (retain) NSArray *observers;
@property (retain) NSXPCConnection *serviceConnection;
@property long long state;
@property (retain) NSMutableDictionary *pendingRequests;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (copy) id /* block */ pendingStartCompletionHandler;
@property (retain) NSSet *statusProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceBundleIdentifier;
+ (id)configurationClient;
+ (BOOL)openPhotosApplicationPreferencesToiCloudPane;

- (BOOL)isStarted;
- (void)shutdown;
- (void)dealloc;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addConfigurationChangeObserver:(id)a0;
- (void)cloudPhotoLibraryServiceStatusWithReply:(id /* block */)a0;
- (void)estimateLibrarySizeWithOptions:(id)a0 progress:(id *)a1 completionHandler:(id /* block */)a2;
- (void)requestCloudPhotoServiceStateChange:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupServiceConnection;
- (void)addInformationAboutClientAndRequest:(id)a0 toStateChangeRequestInformation:(id)a1;
- (void)cloudPhotoServicesStatusWithCompletionHandler:(id /* block */)a0;
- (void)cloudPhotoServicesStatusWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)didChangeLoggedInAccountStatus;
- (void)didChangePreferencesForServiceIdentifiers:(id)a0;
- (void)didChangeStateForServiceIdentifiers:(id)a0;
- (void)didChangeSystemPhotoLibraryStatus;
- (void)notifyObserversImplementingSelector:(SEL)a0 notifier:(id /* block */)a1;
- (void)removeConfigurationChangeObserver:(id)a0;
- (void)transitionToStartedState;
- (void)updateCachedConfigurationWithCompletionHandler:(id /* block */)a0;

@end
