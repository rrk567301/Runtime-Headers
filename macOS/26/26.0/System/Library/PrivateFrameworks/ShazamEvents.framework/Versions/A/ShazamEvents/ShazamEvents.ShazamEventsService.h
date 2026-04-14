@protocol SHServiceDelegate;

@interface ShazamEvents.ShazamEventsService : NSObject <SHService, ShazamEvents.ShazamEventsServer> {
    void /* unknown type, empty encoding */ serviceCoordinator;
    void /* unknown type, empty encoding */ underlyingServiceDelegate;
}

@property (nonatomic, retain) id<SHServiceDelegate> serviceDelegate;

+ (id)machServiceName;
+ (void)initializeGlobalServiceState;

- (void)shutdownService;
- (id)init;
- (void).cxx_destruct;
- (void)eventWithIdentifier:(id)a0 requestTypes:(id)a1 completionHandler:(id /* block */)a2;
- (void)partialEventsWithGeoRequests:(id)a0 requestTypes:(id)a1 completionHandler:(id /* block */)a2;
- (void)scheduleWithGroupIdentifier:(id)a0 requestTypes:(id)a1 startDate:(id)a2 completionHandler:(id /* block */)a3;
- (void)scheduleWithParticipantIdentifier:(id)a0 requestTypes:(id)a1 startDate:(id)a2 completionHandler:(id /* block */)a3;
- (void)scheduleWithVenueIdentifier:(id)a0 requestTypes:(id)a1 startDate:(id)a2 completionHandler:(id /* block */)a3;
- (void)serviceVersionWithCompletionHandler:(id /* block */)a0;

@end
