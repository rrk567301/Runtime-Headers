@class NSURL;

@interface POUserGroupManager : NSObject

@property (retain, nonatomic) NSURL *filePath;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (id)_nextAvailableUserId:(id)a0;
- (id)createOrUpdateUser:(id)a0 withError:(id *)a1;
- (id)findUser:(id)a0 withError:(id *)a1;
- (id)getAllUsersWithError:(id *)a0;
- (id)loadUsers_lockedWithError:(id *)a0;
- (char)removeUserWithName:(id)a0 withError:(id *)a1;
- (char)saveUsers_locked:(id)a0 withError:(id *)a1;

@end
