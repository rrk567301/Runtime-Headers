@class NSDictionary;

@interface IMChorosMonitor : NSObject

@property (nonatomic) BOOL needsShowConnectionUI;
@property (nonatomic) long long showConnectionUIRetryCount;
@property (nonatomic) BOOL monitorStarted;
@property (retain, nonatomic) NSDictionary *emergencyHandles;

+ (id)sharedInstance;
+ (BOOL)isStewieRoadsideChat:(id)a0;

- (id)getState;
- (id)telephonyClient;
- (void)reset;
- (BOOL)isStewieActive;
- (id)init;
- (void).cxx_destruct;
- (void)startMonitor;
- (void)stateChanged:(id)a0;
- (BOOL)_activeServicesHasEmergency:(id)a0;
- (BOOL)isMessagingActiveOverSatellite;
- (BOOL)isSatelliteConnectionActive;
- (BOOL)isStewieEmergencyActive;
- (void)launchStewieForMessagingWithAppForegrounded:(BOOL)a0;
- (long long)mostRecentlyUsedConversationForEmergency;
- (void)openStewieAppForChatIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)placeEmergencyCallToHandle:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldShowTextEmergencyServicesButton;
- (void)startMonitorIfNeededForReason:(long long)a0;
- (void)startMonitorIfNeededForReason:(long long)a0 withOffer:(BOOL)a1 callInBackground:(BOOL)a2;
- (void)startMonitorWithOffer:(BOOL)a0;
- (double)timeSinceBeingOffGrid;

@end
