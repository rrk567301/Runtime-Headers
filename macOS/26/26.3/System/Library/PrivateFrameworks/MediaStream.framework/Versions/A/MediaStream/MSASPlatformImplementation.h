@class NSString, ACAccountStore;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)pluginClass;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)a0;
- (id)albumSharingDaemon;
- (void)logLevel:(int)a0 personID:(id)a1 albumGUID:(id)a2 format:(id)a3;
- (id)_accountForPersonID:(id)a0;
- (id)init;
- (BOOL)MSASIsAllowedToUploadAssets;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (BOOL)personIDEnabledForAlbumSharing:(id)a0;
- (id)MMCSUploadSocketOptionsForPersonID:(id)a0;
- (BOOL)shouldLogAtLevel:(int)a0;
- (void).cxx_destruct;
- (id)personIDsEnabledForAlbumSharing;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (BOOL)shouldEnableNewFeatures;
- (id)baseSharingURLForPersonID:(id)a0;
- (id)pushTokenForPersonID:(id)a0;
- (int)MMCSConcurrentConnectionsCount;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)a0;
- (id)pathAlbumSharingDir;
- (BOOL)MSASIsAllowedToTransferMetadata;

@end
