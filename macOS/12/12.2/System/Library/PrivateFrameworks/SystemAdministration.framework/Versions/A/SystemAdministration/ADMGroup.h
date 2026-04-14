@class NSNumber, NSMutableArray, NSString;

@interface ADMGroup : ADMDSRecord {
    NSNumber *mGUIDNumber;
    NSMutableArray *mUsers;
    NSMutableArray *mUserGUIDs;
    NSMutableArray *mNestedGUIDs;
    BOOL mGUIDChecked;
    BOOL mHasGUID;
    NSString *mUUIDString;
    NSString *mRealNameString;
}

+ (id)findGroupByID:(long long)a0;
+ (id)adminGroup;
+ (id)findGroupByName:(id)a0;
+ (id)createGroupWithName:(id)a0 realName:(id)a1 gid:(long long)a2 inNode:(id)a3;
+ (id)findGroupByName:(id)a0 node:(id)a1;
+ (long long)nextFreeGroupIDInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)allLocalGroups;
+ (id)createGroupWithName:(id)a0 gid:(long long)a1 inNode:(id)a2;
+ (id)findGroupByGUID:(struct __CFUUID { } *)a0;
+ (long long)nextFreeGroupID;
+ (id)wcCreateGroupWithName:(id)a0 realName:(id)a1;

- (void)dealloc;
- (void)refresh;
- (long long)gid;
- (id)generatedUID;
- (id)initWithRecordName:(const char *)a0 type:(const char *)a1 node:(id)a2;
- (void)_postDistributedNotification:(id)a0;
- (BOOL)hasMember:(id)a0;
- (id)arrayOfMemberNames;
- (BOOL)deleteGroup;
- (BOOL)removeMember:(id)a0;
- (long long)setRecordNameTo:(id)a0;
- (BOOL)setGeneratedUID:(id)a0;
- (id)_initWithInfo:(id)a0 node:(id)a1;
- (BOOL)hasMemberUUID:(id)a0;
- (BOOL)addMemberUUID:(id)a0 name:(id)a1;
- (BOOL)removeMemberUUID:(id)a0 name:(id)a1;
- (id)arrayOfMemberGUIDs;
- (BOOL)hasNestedGroup:(id)a0;
- (id)arrayOfNestedGUIDs;
- (BOOL)setgid:(long long)a0;
- (id)realName;
- (BOOL)setRealName:(id)a0;
- (BOOL)addMember:(id)a0;
- (BOOL)addNestedGroup:(id)a0;
- (BOOL)removeNestedGroup:(id)a0;
- (BOOL)wcRemoveMember:(id)a0;
- (BOOL)wcSetGroupName:(id)a0;
- (BOOL)wcAddNestedGroupWithName:(id)a0;
- (BOOL)wcAddNestedGroup:(id)a0;
- (BOOL)wcRemoveNestedGroupWithName:(id)a0;
- (BOOL)wcAddAccountWithName:(id)a0;
- (BOOL)wcRemoveAccountWithName:(id)a0;
- (BOOL)wcRemoveGroupMemberWithUUID:(id)a0;

@end
