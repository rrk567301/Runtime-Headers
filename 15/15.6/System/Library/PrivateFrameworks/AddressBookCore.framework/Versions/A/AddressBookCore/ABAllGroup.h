@class NSString;

@interface ABAllGroup : ABSpecialGroup {
    NSString *_remoteLocation;
}

+ (char)_isPublicRecord;
+ (id)allGroup;
+ (id)allGroupForRemoteLocation:(id)a0;
+ (id)specialGroupForAddressBook:(id)a0;

- (void)dealloc;
- (id)description;
- (id)members;
- (id)subgroups;
- (id)valueForProperty:(id)a0;
- (char)addMember:(id)a0;
- (char)removeMember:(id)a0;
- (char)setValue:(id)a0 forProperty:(id)a1;
- (char)removeSubgroup:(id)a0;
- (char)addSubgroup:(id)a0;
- (id)enclosedSubscriptionGroups;
- (id)initWithRemoteLocation:(id)a0;
- (id)initWithRemoteLocation:(id)a0 addressBook:(id)a1;
- (char)isSpecialGroup;
- (void)markRecordWithGroupSubscription:(id)a0;
- (id)membersAndSubgroups;
- (id)remoteLocation;
- (char)removeValueforProperty:(id)a0;

@end
