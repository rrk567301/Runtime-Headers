@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;

+ (id)sharedInstance;

- (id)truthPublicDatabase;
- (void).cxx_destruct;
- (id)_nickNameContainer;
- (BOOL)_serverSaysToUseOldContainer;
- (id)nickNamePublicDatabase;
- (id)init;
- (id)manateeDataBase;
- (id)truthDatabase;
- (id)_nickNameContainerIdentifier;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;

@end
