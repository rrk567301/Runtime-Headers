@class NSDictionary;

@interface IMMutedChatList : NSObject

@property (class, readonly, nonatomic) IMMutedChatList *sharedList;

@property (readonly, nonatomic) NSDictionary *mutedChatList;

- (void)dealloc;
- (id)init;
- (void)_handleChatGroupIDChangedNotification:(id)a0;
- (void)_handleMutedChatListChanged;
- (void)_synchronizeMutedChatList:(id)a0 syncToPairedDevice:(BOOL)a1;
- (id)groupHashForParticipantIDs:(id)a0 lastAddressedHandleID:(id)a1;
- (void)groupID:(id)a0 didChangeTo:(id)a1 previousDomainIdentifiers:(id)a2 newDomainIdentifiers:(id)a3 forChatIdentifier:(id)a4;
- (BOOL)isMutedChatForChatIdentifier:(id)a0 chatStyle:(unsigned char)a1 groupID:(id)a2 domainIdentifiers:(id)a3 participantIDs:(id)a4 lastAddressedHandleID:(id)a5 originalGroupID:(id)a6;
- (BOOL)isMutedChatForMuteIdentifiers:(id)a0;
- (void)muteChatWithMuteIdentifiers:(id)a0 untilDate:(id)a1 syncToPairedDevice:(BOOL)a2;
- (id)muteIdentifiersForChatStyle:(unsigned char)a0 groupID:(id)a1 domainIdentifiers:(id)a2 participantIDs:(id)a3 lastAddressedHandleID:(id)a4 originalGroupID:(id)a5 chatIdentifier:(id)a6;
- (void)syncToPairedDeviceIncludingVersion:(BOOL)a0;
- (void)unmuteChatWithMuteIdentifiers:(id)a0 syncToPairedDevice:(BOOL)a1;
- (id)unmuteDateForMuteIdentifier:(id)a0;
- (id)unmuteDateForMuteIdentifiers:(id)a0;

@end
