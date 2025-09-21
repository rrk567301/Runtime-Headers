@interface CNChangeHistoryEventFactory : NSObject

- (id)addContactEventWithContact:(id)a0 containerIdentifier:(id)a1;
- (id)addContactEventWithContactIdentifier:(id)a0 containerIdentifier:(id)a1;
- (id)addGroupEventWithGroup:(id)a0 containerIdentifier:(id)a1;
- (id)addMemberToGroupEventWithMember:(id)a0 group:(id)a1;
- (id)addSubgroupToGroupEventWithSubgroup:(id)a0 group:(id)a1;
- (id)deleteContactEventWithContactIdentifier:(id)a0;
- (id)deleteContactEventWithContactIdentifier:(id)a0 externalURI:(id)a1 externalModificationTag:(id)a2;
- (id)deleteGroupEventWithGroupIdentifier:(id)a0;
- (id)deleteGroupEventWithGroupIdentifier:(id)a0 externalURI:(id)a1 externalModificationTag:(id)a2;
- (id)differentMeCardEventWithContactIdentifier:(id)a0;
- (id)dropEverythingEvent;
- (id)linkContactsEventWithFromContact:(id)a0 toContact:(id)a1 unifiedContact:(id)a2;
- (id)preferredContactForImageEventWithPreferredContact:(id)a0 unifiedContact:(id)a1;
- (id)preferredContactForNameEventWithPreferredContact:(id)a0 unifiedContact:(id)a1;
- (id)removeMemberFromGroupEventWithMember:(id)a0 group:(id)a1;
- (id)removeSubgroupFromGroupEventWithSubgroup:(id)a0 group:(id)a1;
- (id)unlinkContactEventWithContact:(id)a0;
- (id)updateContactEventWithContact:(id)a0 imagesChanged:(char)a1;
- (id)updateContactEventWithContactIdentifier:(id)a0 imagesChanged:(char)a1;
- (id)updateGroupEventWithGroup:(id)a0;

@end
