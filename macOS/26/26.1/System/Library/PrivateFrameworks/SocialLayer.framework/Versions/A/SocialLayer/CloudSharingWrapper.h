@interface CloudSharingWrapper : NSObject

+ (void)addParticipantsToShare:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 permissionType:(long long)a4 allowOthersToInvite:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (void)completeShare:(id)a0 containerSetupInfo:(id)a1 emailAddresses:(id)a2 phoneNumbers:(id)a3 accessType:(long long)a4 permissionType:(long long)a5 allowOthersToInvite:(BOOL)a6 completionHandler:(id /* block */)a7;
+ (void)shareFileOrFolderURL:(id)a0 emailAddresses:(id)a1 phoneNumbers:(id)a2 accessType:(long long)a3 permissionType:(long long)a4 allowOthersToInvite:(BOOL)a5 completionHandler:(id /* block */)a6;

@end
