@class NSString, ACAccountStore;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)MMCSDownloadSocketOptionsForPersonID:(id)a0;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (id)_accountForPersonID:(id)a0;
- (id)personIDsEnabledForAlbumSharing;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (int)MMCSConcurrentConnectionsCount;
- (BOOL)personIDEnabledForAlbumSharing:(id)a0;
- (BOOL)shouldEnableNewFeatures;
- (id)init;
- (BOOL)MSASIsAllowedToUploadAssets;
- (id)pathAlbumSharingDir;
- (Class)pluginClass;
- (id)pushTokenForPersonID:(id)a0;
- (id)baseSharingURLForPersonID:(id)a0;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)a0;
- (id)albumSharingDaemon;
- (void)logLevel:(int)a0 personID:(id)a1 albumGUID:(id)a2 format:(id)a3;
- (id)MMCSUploadSocketOptionsForPersonID:(id)a0;
- (BOOL)shouldLogAtLevel:(int)a0;
- (void).cxx_destruct;

@end
