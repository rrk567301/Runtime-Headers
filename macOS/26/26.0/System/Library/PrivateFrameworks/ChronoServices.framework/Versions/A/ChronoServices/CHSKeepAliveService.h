@class CHSChronoServicesConnection;

@interface CHSKeepAliveService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)initWithConnection:(id)a0;
- (id)acquireKeepAliveAssertionForExtensionBundleIdentifier:(id)a0 reason:(id)a1 error:(out id *)a2;
- (id)init;
- (void).cxx_destruct;

@end
