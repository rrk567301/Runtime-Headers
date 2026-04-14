@class NSPredicate, CNCDPersistenceContext;

@interface CNCDAccountFetcher : NSObject

@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) CNCDPersistenceContext *persistenceContext;

+ (id)accountsForPredicate:(id)a0 inPersistenceStack:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)init;
- (id)fetchAccounts:(id *)a0;
- (id)initWithPredicate:(id)a0 persistenceContext:(id)a1;

@end
