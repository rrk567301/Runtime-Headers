@class CHSChronoServicesConnection;

@interface CHSNSURLSessiondService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (id)URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)a0 info:(id)a1;
- (id)init;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;

@end
