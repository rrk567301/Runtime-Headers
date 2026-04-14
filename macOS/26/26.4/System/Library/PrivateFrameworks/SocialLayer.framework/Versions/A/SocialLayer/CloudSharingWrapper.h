@interface CloudSharingWrapper : NSObject

+ (void)existingShareForFileOrFolderURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)shareFileOrFolderURL:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2 optionsGroups:(id)a3 completionHandler:(id /* block */)a4;
+ (void)addParticipantsToShare:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 permissionType:(long long)a4 allowOthersToInvite:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (void)addParticipantsToShareWithFileOrFolderURL:(id)a0 share:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 optionsGroups:(id)a4 completionHandler:(id /* block */)a5;
+ (void)addParticipantsToShareWithFileOrFolderURL:(id)a0 share:(id)a1 oneTimeParticipantCount:(unsigned long long)a2 optionsGroups:(id)a3 completionHandler:(id /* block */)a4;
+ (void)completeShare:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 accessType:(long long)a4 permissionType:(long long)a5 allowOthersToInvite:(BOOL)a6 completionHandler:(id /* block */)a7;
+ (void)shareFileOrFolderURL:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2 accessType:(long long)a3 permissionType:(long long)a4 allowOthersToInvite:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (void)shareFileOrFolderURL:(id)a0 oneTimeParticipantCount:(unsigned long long)a1 optionsGroups:(id)a2 completionHandler:(id /* block */)a3;

@end
