@class MADAccessService;

@interface MADAccessServiceProxy : NSObject <MADAccessClientProtocol> {
    MADAccessService *_service;
}

- (id)initWithService:(id)a0;
- (void).cxx_destruct;

@end
