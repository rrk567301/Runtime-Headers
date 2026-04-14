@class MADService;

@interface MADServiceProxy : NSObject <VCPMediaAnalysisClientProtocol> {
    MADService *_service;
}

- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (void)reportProgress:(double)a0 forRequest:(int)a1;

@end
