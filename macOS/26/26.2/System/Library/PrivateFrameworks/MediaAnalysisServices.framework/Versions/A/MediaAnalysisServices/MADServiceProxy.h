@class MADService;

@interface MADServiceProxy : NSObject <VCPMediaAnalysisClientProtocol> {
    MADService *_service;
}

- (void).cxx_destruct;
- (void)reportProgress:(double)a0 forRequest:(int)a1;
- (id)initWithService:(id)a0;
- (void)handleResult:(id)a0 atRequestIdx:(unsigned long long)a1 forRequestID:(int)a2;
- (void)reportMADUserSafetyPolicy:(id)a0 error:(id)a1;

@end
