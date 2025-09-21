@class CHSChronoServicesConnection, NSString;

@interface CHSAppIntentsXPCListenerEndpointProvider : NSObject {
    CHSChronoServicesConnection *_connection;
    NSString *_bundleIdentifier;
}

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)getAppIntentsXPCListenerEndpointWithCompletion:(id /* block */)a0;

@end
