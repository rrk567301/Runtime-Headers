@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;

+ (id)sharedInstance;

- (id)truthPublicDatabase;
- (BOOL)_serverSaysToUseOldContainer;
- (id)nickNamePublicDatabase;
- (id)_nickNameContainerIdentifier;
- (id)_nickNameContainer;
- (void).cxx_destruct;
- (id)manateeDataBase;
- (id)truthDatabase;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;
- (id)init;

@end
