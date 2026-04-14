@class SAActivityObject, NSString;

@interface FetchActivityStream : SAFetchActivityStream <AFServiceCommand>

@property (retain, nonatomic) SAActivityObject *appLaunchActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)fetchAllBiomeEventsWithCommand:(id)a0 completion:(id /* block */)a1;
- (id)_timeBasedMergePublisher:(id)a0 withOtherPublishers:(id)a1;
- (id)_timeBasedPublisher:(id)a0 withStartDate:(id)a1 endDate:(id)a2 limit:(id)a3;
- (void)fetchNonSiriUIEventsWithCommand:(id)a0 completion:(id /* block */)a1;
- (void)fetchSiriUIEventsWithCommand:(id)a0 completion:(id /* block */)a1;
- (id)convertIntentEventToSAActivity:(id)a0;
- (id)convertNowPlayingEventToSAActivity:(id)a0;
- (id)convertSiriExecutionEventToSAActivity:(id)a0;
- (id)convertAlarmEventToSAActivity:(id)a0 eventTimestamp:(double)a1;
- (id)convertBiomeEventToSAActivity:(id)a0;

@end
