@class NSString;

@interface ABAllGroup : ABSpecialGroup {
    NSString *_remoteLocation;
}

+ (BOOL)_isPublicRecord;
+ (id)specialGroupForAddressBook:(id)a0;
+ (id)allGroup;
+ (id)allGroupForRemoteLocation:(id)a0;

- (void)dealloc;
- (id)description;
- (id)members;
- (id)subgroups;
- (id)valueForProperty:(id)a0;
- (BOOL)addMember:(id)a0;
- (BOOL)removeMember:(id)a0;
- (id)remoteLocation;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)initWithRemoteLocation:(id)a0;
- (id)initWithRemoteLocation:(id)a0 addressBook:(id)a1;
- (BOOL)removeValueforProperty:(id)a0;
- (id)membersAndSubgroups;
- (BOOL)addSubgroup:(id)a0;
- (BOOL)removeSubgroup:(id)a0;
- (BOOL)isSpecialGroup;
- (id)enclosedSubscriptionGroups;
- (void)markRecordWithGroupSubscription:(id)a0;

@end
