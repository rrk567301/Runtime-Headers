@class NSDictionary;

@interface IMChorosMonitor : NSObject

@property (retain, nonatomic) NSDictionary *emergencyHandles;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)startMonitor;
- (char)isStewieActive;
- (id)getState;
- (id)telephonyClient;
- (void)stateChanged:(id)a0;
- (char)_activeServicesHasEmergency:(id)a0;
- (char)isMessagingActiveOverSatellite;
- (char)isSatelliteConnectionActive;
- (char)isStewieEmergencyActive;
- (long long)mostRecentlyUsedConversationForEmergency;
- (void)openStewieAppForChatIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)placeEmergencyCallToHandle:(id)a0 completion:(id /* block */)a1;
- (char)shouldShowTextEmergencyServicesButton;

@end
