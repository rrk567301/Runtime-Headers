@class NSString, NSDictionary, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface WFResource : NSObject <WFApplicationStateObserver, WFErrorRecoveryAttempting>

@property (readonly, nonatomic) char shouldRefreshAvailability;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, copy, nonatomic) NSDictionary *definition;
@property (readonly, copy, nonatomic) NSDictionary *eventDictionary;
@property (readonly, nonatomic, getter=isAvailable) char available;
@property (readonly, nonatomic) NSError *availabilityError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (char)isSingleton;
+ (char)mustBeAvailableForDisplay;
+ (char)refreshesAvailabilityOnApplicationResume;
+ (char)alwaysMakeAvailable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (char)_isAvailable;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 userInterface:(id)a2 completionHandler:(id /* block */)a3;
- (void)refreshAvailabilityWithForcedNotification;
- (void)refreshAvailabilityWithNotification;
- (void)refreshAvailabilityWithNotification:(char)a0;
- (id)_availabilityError;
- (void)invalidateAvailability;
- (void)notifyResourcesAboutAvailabilityChange;
- (void)refreshAvailability;
- (void)refreshAvailabilityIfNeeded;
- (char)shouldNotifyResourcesAfterAvailabilityUpdateWithForcedNotification:(char)a0;
- (void)updateAvailability:(char)a0 withError:(id)a1;
- (void)updateAvailability:(char)a0 withError:(id)a1 completionHandler:(id /* block */)a2;

@end
