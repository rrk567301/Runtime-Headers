@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;

+ (id)sharedInstance;

- (BOOL)_serverSaysToUseOldContainer;
- (id)truthDatabase;
- (id)manateeDataBase;
- (id)nickNamePublicDatabase;
- (id)truthPublicDatabase;
- (id)init;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;
- (id)_nickNameContainerIdentifier;
- (void).cxx_destruct;
- (id)_nickNameContainer;

@end
