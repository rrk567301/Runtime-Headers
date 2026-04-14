@class CHSChronoServicesConnection;

@interface CHSDescriptorService : NSObject {
    CHSChronoServicesConnection *_connection;
}

- (void).cxx_destruct;
- (void)modifyDescriptorEnablement:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
