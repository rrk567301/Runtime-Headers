@class NSArray, NSMutableSet, NSMutableDictionary;

@interface LUITestUserController : LUIUserController

@property (retain) NSMutableSet *usersSet;
@property (retain) NSArray *userNames;
@property (retain) NSMutableDictionary *attributesOfUsers;
@property unsigned long long desiredNumberOfUsers;
@property BOOL includeFindMyMacUser;
@property BOOL includeGuestUser;
@property BOOL includeOtherUser;
@property (readonly) NSArray *users;

+ (id)sharedUserController;

- (void).cxx_destruct;
- (void)_updateUsersSet;
- (id)_randomFileFromDirectory:(id)a0;
- (BOOL)_randomIsSuspended;
- (id)_randomUserAvatar;
- (id)_randomUserPicture;
- (id)_randomWallpaper;
- (void)_updateAttributesOfUsers;
- (id)_userListWithNumberOfUsers:(unsigned long long)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1 ofUser:(id)a2;
- (void)setAttribute:(id)a0 forKey:(id)a1 userID:(unsigned int)a2;
- (id)userWithGUID:(id)a0;
- (id)userWithName:(id)a0;
- (id)userWithUID:(unsigned int)a0;

@end
