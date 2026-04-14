@class CHSChronoServicesConnection;

@interface CHSApplicationProcessStateChangeConsumer : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (void)applicationWithBundleIdentifierEnteredForeground:(id)a0;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
