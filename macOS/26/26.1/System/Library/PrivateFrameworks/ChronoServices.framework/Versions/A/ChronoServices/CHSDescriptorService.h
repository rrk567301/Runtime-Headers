@class CHSChronoServicesConnection;

@interface CHSDescriptorService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (void)modifyDescriptorEnablement:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
