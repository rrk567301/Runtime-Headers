@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;

+ (id)sharedInstance;

- (BOOL)_serverSaysToUseOldContainer;
- (id)truthPublicDatabase;
- (id)init;
- (void).cxx_destruct;
- (id)truthDatabase;
- (id)_nickNameContainer;
- (id)nickNamePublicDatabase;
- (id)_nickNameContainerIdentifier;
- (id)manateeDataBase;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;

@end
