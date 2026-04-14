@class CHSChronoServicesConnection;

@interface CHSNSURLSessiondService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)a0 info:(id)a1;

@end
