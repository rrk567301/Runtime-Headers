@class MADComputeService;

@interface MADComputeServiceProxy : NSObject <MADComputeServiceClientProtocol> {
    MADComputeService *_coordinator;
}

- (id)initWithCoordinator:(id)a0;
- (void).cxx_destruct;
- (void)handleResults:(id)a0 assetRepresentation:(id)a1 requestID:(id)a2 error:(id)a3 acknowledgement:(id /* block */)a4;
- (void)reportProgress:(double)a0 requestID:(id)a1;

@end
