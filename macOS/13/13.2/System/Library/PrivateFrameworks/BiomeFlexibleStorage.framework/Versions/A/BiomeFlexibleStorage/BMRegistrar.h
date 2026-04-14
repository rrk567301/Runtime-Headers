@class NSDictionary;
@protocol BMStreamsAccessClientMethods;

@interface BMRegistrar : BMSQLStore {
    id<BMStreamsAccessClientMethods> _accessClient;
}

@property (readonly, nonatomic) NSDictionary *registeredClientsByStream;
@property (readonly, nonatomic) NSDictionary *streamRegistrationCounts;

+ (id)migrations;
+ (id)centralRegistrar;

- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)propagateDeletionOfEventsInStream:(id)a0 withIdentifiers:(id)a1;
- (BOOL)registerClientWithBundleID:(id)a0 databaseURL:(id)a1 source:(id)a2;
- (id)registrationsForStream:(id)a0;
- (BOOL)propagateDeletionOfEvents:(id)a0;

@end
