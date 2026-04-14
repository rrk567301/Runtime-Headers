@class SAActivityObject, NSString;

@interface ASFetchActivityStream : SAFetchActivityStream <AFServiceCommand>

@property (retain, nonatomic) SAActivityObject *appLaunchActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performWithCompletion:(id /* block */)a0;
- (void)fetchActivityStreamWithPredicate:(id)a0 completion:(id /* block */)a1;
- (void)fetchSiriUIEventsWithCommand:(id)a0 completion:(id /* block */)a1;
- (void)fetchNonSiriUIEventsWithCommand:(id)a0 completion:(id /* block */)a1;
- (id)convertIntentEventToSAActivity:(id)a0;
- (id)convertNowPlayingEventToSAActivity:(id)a0;
- (id)convertSiriExecutionEventToSAActivity:(id)a0;
- (void)fetchAllBiomeEventsWithCommand:(id)a0 completion:(id /* block */)a1;
- (void)fetchSiriExecutionEventsWithCommand:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppIntentEventsWithCommand:(id)a0 completion:(id /* block */)a1;

@end
