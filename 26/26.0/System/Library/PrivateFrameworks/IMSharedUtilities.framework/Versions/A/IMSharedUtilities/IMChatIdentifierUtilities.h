@interface IMChatIdentifierUtilities : NSObject

+ (id)_handleBasedPersonCentricIDWithParticipantIDs:(id)a0;
+ (id)_randomUnverifiedChatIdentifierForGroupChat;
+ (id)generateUnusedChatIdentifierForGroupChatWithServiceName:(id)a0 chatWithChatIdentifierExists:(id /* block */)a1;
+ (id)personCentricIDForChatWithGUID:(id)a0 chatIdentifier:(id)a1 chatStyle:(unsigned char)a2 groupID:(id)a3 displayName:(id)a4 lastKnownToBeHybrid:(BOOL)a5 mergeDisplayNames:(BOOL)a6 participantIDs:(id)a7 mergeFilteredThreads:(BOOL)a8;

@end
