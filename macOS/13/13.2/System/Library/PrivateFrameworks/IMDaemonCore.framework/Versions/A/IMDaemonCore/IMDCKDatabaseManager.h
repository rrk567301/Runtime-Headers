@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_serverSaysToUseOldContainer;
- (id)_nickNameContainerIdentifier;
- (id)_nickNameContainer;
- (id)truthDatabase;
- (id)truthPublicDatabase;
- (id)manateeDataBase;
- (id)nickNamePublicDatabase;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;

@end
