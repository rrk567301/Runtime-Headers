@class NSString, ACAccountStore;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)MMCSConcurrentConnectionsCount;
- (id)albumSharingDaemon;
- (void)logLevel:(int)a0 personID:(id)a1 albumGUID:(id)a2 format:(id)a3;
- (BOOL)shouldEnableNewFeatures;
- (id)baseSharingURLForPersonID:(id)a0;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (BOOL)MSASIsAllowedToUploadAssets;
- (id)personIDsEnabledForAlbumSharing;
- (id)MMCSUploadSocketOptionsForPersonID:(id)a0;
- (id)pathAlbumSharingDir;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldLogAtLevel:(int)a0;
- (id)_accountForPersonID:(id)a0;
- (Class)pluginClass;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)a0;
- (id)pushTokenForPersonID:(id)a0;
- (id)init;
- (BOOL)personIDEnabledForAlbumSharing:(id)a0;

@end
