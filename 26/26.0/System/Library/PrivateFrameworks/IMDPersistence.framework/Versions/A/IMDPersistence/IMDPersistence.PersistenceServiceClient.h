@protocol IMDPersistenceService;

@interface IMDPersistence.PersistenceServiceClient : NSObject {
    void /* unknown type, empty encoding */ lock;
}

@property (nonatomic, readonly) id<IMDPersistenceService> remoteProxy;
@property (nonatomic, readonly) id<IMDPersistenceService> synchronousRemoteProxy;

- (void)reset;
- (id)init;
- (void).cxx_destruct;

@end
