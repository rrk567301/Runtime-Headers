@class NSNumber, NSMutableArray, NSString;

@interface Group : DSRecord {
    NSNumber *mGUIDNumber;
    NSMutableArray *mUsers;
    NSMutableArray *mUserGUIDs;
    NSMutableArray *mNestedGUIDs;
    char mGUIDChecked;
    char mHasGUID;
    NSString *mUUIDString;
    NSString *mRealNameString;
}

+ (long long)nextFreeGroupID;
+ (id)createGroupWithName:(id)a0 gid:(long long)a1 inNode:(id)a2;
+ (id)wcCreateGroupWithName:(id)a0 realName:(id)a1;
+ (id)adminGroup;
+ (id)allLocalGroups;
+ (id)createGroupWithName:(id)a0 realName:(id)a1 gid:(long long)a2 inNode:(id)a3;
+ (id)findGroupByGUID:(struct __CFUUID { } *)a0;
+ (id)findGroupByID:(long long)a0;
+ (id)findGroupByName:(id)a0;
+ (id)findGroupByName:(id)a0 node:(id)a1;
+ (long long)nextFreeGroupIDInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (void)dealloc;
- (void)refresh;
- (long long)gid;
- (id)generatedUID;
- (id)realName;
- (char)setRealName:(id)a0;
- (char)addNestedGroup:(id)a0;
- (id)_initWithInfo:(id)a0 node:(id)a1;
- (char)wcRemoveMember:(id)a0;
- (char)hasNestedGroup:(id)a0;
- (char)setgid:(long long)a0;
- (char)wcSetGroupName:(id)a0;
- (void)_postDistributedNotification:(id)a0;
- (char)addMember:(id)a0;
- (char)addMemberUUID:(id)a0 name:(id)a1;
- (id)arrayOfMemberGUIDs;
- (id)arrayOfMemberNames;
- (id)arrayOfNestedGUIDs;
- (char)deleteGroup;
- (char)hasMember:(id)a0;
- (char)hasMemberUUID:(id)a0;
- (id)initWithRecordName:(const char *)a0 type:(const char *)a1 node:(id)a2;
- (char)removeMember:(id)a0;
- (char)removeMemberUUID:(id)a0 name:(id)a1;
- (char)removeNestedGroup:(id)a0;
- (char)setGeneratedUID:(id)a0;
- (long long)setRecordNameTo:(id)a0;
- (char)wcAddAccountWithName:(id)a0;
- (char)wcAddNestedGroup:(id)a0;
- (char)wcAddNestedGroupWithName:(id)a0;
- (char)wcRemoveAccountWithName:(id)a0;
- (char)wcRemoveGroupMemberWithUUID:(id)a0;
- (char)wcRemoveNestedGroupWithName:(id)a0;

@end
