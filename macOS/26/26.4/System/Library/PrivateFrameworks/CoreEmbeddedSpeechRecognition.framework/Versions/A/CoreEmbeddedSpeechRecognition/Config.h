@class ContextualEntityRetrieval, EntityCleanup, AppEntities;

@interface Config : NSObject

@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) AppEntities *appEntities;
@property (nonatomic, readonly) ContextualEntityRetrieval *contextualEntityRetrieval;
@property (nonatomic, readonly) EntityCleanup *entityCleanup;

- (void).cxx_destruct;

@end
