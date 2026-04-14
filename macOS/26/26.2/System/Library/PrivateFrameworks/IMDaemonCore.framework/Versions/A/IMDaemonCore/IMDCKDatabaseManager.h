@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;

+ (id)sharedInstance;

- (id)truthPublicDatabase;
- (id)nickNamePublicDatabase;
- (BOOL)_serverSaysToUseOldContainer;
- (void).cxx_destruct;
- (id)_nickNameContainerIdentifier;
- (id)_nickNameContainer;
- (id)manateeDataBase;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;
- (id)truthDatabase;
- (id)init;

@end
