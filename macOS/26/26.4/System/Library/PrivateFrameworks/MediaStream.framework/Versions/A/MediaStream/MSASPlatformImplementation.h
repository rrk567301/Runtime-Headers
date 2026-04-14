@class NSString, ACAccountStore;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)pluginClass;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (id)pathAlbumSharingDir;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)a0;
- (BOOL)personIDEnabledForAlbumSharing:(id)a0;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (id)albumSharingDaemon;
- (BOOL)shouldEnableNewFeatures;
- (id)pushTokenForPersonID:(id)a0;
- (void).cxx_destruct;
- (void)logLevel:(int)a0 personID:(id)a1 albumGUID:(id)a2 format:(id)a3;
- (id)MMCSUploadSocketOptionsForPersonID:(id)a0;
- (id)baseSharingURLForPersonID:(id)a0;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)a0;
- (id)init;
- (BOOL)shouldLogAtLevel:(int)a0;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (id)personIDsEnabledForAlbumSharing;
- (id)_accountForPersonID:(id)a0;
- (int)MMCSConcurrentConnectionsCount;
- (BOOL)MSASIsAllowedToUploadAssets;

@end
