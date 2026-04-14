@class NSArray;
@protocol SHServiceDelegate;

@interface ShazamEvents.ShazamEventsService : SHService <SHWorkerDelegate, ShazamEvents.ShazamEventsServer> {
    void /* unknown type, empty encoding */ liveMusicEventFetcher;
    void /* unknown type, empty encoding */ underlyingServiceDelegate;
}

@property (nonatomic, retain) id<SHServiceDelegate> serviceDelegate;
@property (nonatomic, readonly) NSArray *workers;

+ (id)machServiceName;
+ (void)initializeGlobalServiceState;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldStartWorker:(id)a0;
- (void)liveMusicEventWithEventID:(id)a0 completionHandler:(id /* block */)a1;
- (void)liveMusicScheduleWithArtistID:(id)a0 completionHandler:(id /* block */)a1;
- (void)liveMusicScheduleWithVenueID:(id)a0 completionHandler:(id /* block */)a1;
- (void)workerUpdated:(id)a0 withRunningState:(BOOL)a1;

@end
