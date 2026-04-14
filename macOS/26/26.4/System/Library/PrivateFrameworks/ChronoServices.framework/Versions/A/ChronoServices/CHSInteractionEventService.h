@class CHSChronoServicesConnection;

@interface CHSInteractionEventService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationEnteredForegroundWithBundleID:(id)a0;
- (void)userEnteredAddGalleryForHost:(id)a0;

@end
