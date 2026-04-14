@class NSDictionary, NSString;

@interface CPSStatusInformation : NSObject <CPSStatusInformation>

@property (retain) NSDictionary *statusInformation;
@property long long serviceDataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)accountStatus;
- (unsigned long long)photosApplicationState;
- (BOOL)canEnableCloudPhotoLibraryForSystemPhotoLibrary;
- (id)countOfItemsImportedByReference;
- (id)preferencesValueForKey:(id)a0 serviceIdentifier:(id)a1;
- (BOOL)shouldStartServiceWithTargetState:(long long)a0;
- (long long)targetStateForServiceIdentifier:(id)a0;
- (long long)rampStateForServiceIdentifier:(id)a0;
- (id)loggedIniCloudAccountDisplayNameInformation;
- (id)loggedIniCloudAccountQuotaInformation;
- (id)availabilityBaseURL;
- (id)sharedStreamsURL;
- (id)sharedStreamsPushServiceEnvironment;
- (id)myPhotoStreamURL;
- (BOOL)systemPhotoLibraryIsAvailable;
- (BOOL)legacyApplicationHasUnimportedAssets;
- (id)legacyApplicationItemsToImport;
- (id)legacyMyPhotoStreamLibraryIdentifier;
- (id)legacyStreamApplicationPrefix;
- (BOOL)isLegacyMyPhotoStreamEnabled;
- (BOOL)isLegacySharedPhotoStreamEnabled;
- (id)initWithInformationDictionary:(id)a0;
- (void)validateDataVersion;
- (BOOL)hasStatusProperty:(id)a0;
- (id)rawLegacyStatusInformation;

@end
