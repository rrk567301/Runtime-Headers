@protocol IMDPersistenceService;

@interface IMDPersistence.PersistenceServiceClient : NSObject {
    void /* unknown type, empty encoding */ lock;
}

@property (nonatomic, readonly) id<IMDPersistenceService> remoteProxy;
@property (nonatomic, readonly) id<IMDPersistenceService> synchronousRemoteProxy;

- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
