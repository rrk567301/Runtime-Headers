@class CNCDPersistenceContext, CNContainer;

@interface CNCDPolicyFetcher : NSObject

@property (retain, nonatomic) CNContainer *container;
@property (retain, nonatomic) CNCDPersistenceContext *persistenceContext;

+ (id)policyForContainerWithIdentifier:(id)a0 inPersistenceStack:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)init;
- (id)fetchPolicy:(id *)a0;
- (id)initWithContainer:(id)a0 persistenceContext:(id)a1;

@end
