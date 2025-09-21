@interface CMLUseCaseGroupManager : NSObject

@property (class, readonly, nonatomic) CMLUseCaseGroupManager *sharedManager;

- (char)configureGroupWithName:(id)a0 useCaseGroup:(id)a1 error:(id *)a2;
- (id)listUseCaseGroupsWithError:(id *)a0;

@end
