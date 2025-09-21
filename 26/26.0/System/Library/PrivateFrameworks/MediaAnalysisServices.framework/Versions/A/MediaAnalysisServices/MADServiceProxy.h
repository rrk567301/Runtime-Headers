@class MADService;

@interface MADServiceProxy : NSObject <VCPMediaAnalysisClientProtocol> {
    MADService *_service;
}

- (id)initWithService:(id)a0;
- (void)reportProgress:(double)a0 forRequest:(int)a1;
- (void).cxx_destruct;
- (void)handleResult:(id)a0 atRequestIdx:(unsigned long long)a1 forRequestID:(int)a2;
- (void)reportMADUserSafetyPolicy:(id)a0 error:(id)a1;

@end
