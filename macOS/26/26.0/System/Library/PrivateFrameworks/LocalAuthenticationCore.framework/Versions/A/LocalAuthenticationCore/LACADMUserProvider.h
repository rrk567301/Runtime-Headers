@class NSString;

@interface LACADMUserProvider : NSObject <LACADMUserProviding>

@property (class, readonly, nonatomic) LACADMUserProvider *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentUser;
- (id)allLocalUsers;
- (BOOL)shouldDisplayUser:(id)a0;
- (id)findUserByName:(id)a0 searchParent:(BOOL)a1;
- (id)findUserByID:(unsigned long long)a0 searchParent:(BOOL)a1;
- (BOOL)isUserNameUnique:(id)a0 searchParent:(BOOL)a1;
- (id)namesFromUsersWithUIDs:(id)a0;
- (id)namesFromUsersWithUIDs:(id)a0 presentInGroupWithName:(id)a1;
- (id)rootUser;

@end
