@class CKContainer;

@interface IMDCKDatabaseManager : NSObject

@property (readonly, nonatomic) CKContainer *manateeContainer;
@property (readonly, nonatomic) CKContainer *nickNameContainer;
@property (readonly, nonatomic) CKContainer *truthContainer;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)truthDatabase;
- (id)manateeDataBase;
- (BOOL)_serverSaysToUseOldContainer;
- (id)_nickNameContainerIdentifier;
- (id)_nickNameContainer;
- (id)truthPublicDatabase;
- (id)nickNamePublicDatabase;
- (void)fetchCurrentUserForNicknameContainer:(id /* block */)a0;

@end
