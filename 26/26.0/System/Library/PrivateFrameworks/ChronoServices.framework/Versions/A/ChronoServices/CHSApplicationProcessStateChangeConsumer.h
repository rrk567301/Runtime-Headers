@class CHSChronoServicesConnection;

@interface CHSApplicationProcessStateChangeConsumer : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)initWithConnection:(id)a0;
- (id)init;
- (void)applicationWithBundleIdentifierEnteredForeground:(id)a0;
- (void).cxx_destruct;

@end
