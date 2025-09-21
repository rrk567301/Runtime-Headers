@class CHSChronoServicesConnection;

@interface CHSInteractionEventService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)initWithConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)applicationEnteredForegroundWithBundleID:(id)a0;
- (void)userEnteredAddGalleryForHost:(id)a0;

@end
