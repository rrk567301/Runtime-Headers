@class MADVideoSession;

@interface MADVideoSessionProxy : NSObject <MADVideoSessionClientProtocol> {
    MADVideoSession *_session;
}

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;

@end
