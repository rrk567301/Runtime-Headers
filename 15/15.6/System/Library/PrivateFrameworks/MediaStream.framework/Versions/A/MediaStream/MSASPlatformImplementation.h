@class NSString, ACAccountStore;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)MSASIsAllowedToTransferMetadata;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)a0;
- (char)MSASIsAllowedToUploadAssets;
- (id)personIDsEnabledForAlbumSharing;
- (int)MMCSConcurrentConnectionsCount;
- (id)MMCSUploadSocketOptionsForPersonID:(id)a0;
- (char)MSASPersonIDIsAllowedToDownloadAssets:(id)a0;
- (char)personIDEnabledForAlbumSharing:(id)a0;
- (id)_accountForPersonID:(id)a0;
- (id)albumSharingDaemon;
- (id)baseSharingURLForPersonID:(id)a0;
- (char)deviceHasEnoughDiskSpaceRemainingToOperate;
- (void)logLevel:(int)a0 personID:(id)a1 albumGUID:(id)a2 format:(id)a3;
- (id)pathAlbumSharingDir;
- (char)personIDUsesProductionPushEnvironment:(id)a0;
- (Class)pluginClass;
- (id)pushTokenForPersonID:(id)a0;
- (char)shouldEnableNewFeatures;
- (char)shouldLogAtLevel:(int)a0;

@end
