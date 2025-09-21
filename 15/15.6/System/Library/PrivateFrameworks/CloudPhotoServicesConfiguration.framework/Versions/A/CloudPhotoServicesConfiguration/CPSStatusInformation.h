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
- (id)countOfItemsImportedByReference;
- (char)canEnableCloudPhotoLibraryForSystemPhotoLibrary;
- (unsigned long long)photosApplicationState;
- (id)preferencesValueForKey:(id)a0 serviceIdentifier:(id)a1;
- (id)availabilityBaseURL;
- (char)hasStatusProperty:(id)a0;
- (id)initWithInformationDictionary:(id)a0;
- (char)isLegacyMyPhotoStreamEnabled;
- (char)isLegacySharedPhotoStreamEnabled;
- (char)legacyApplicationHasUnimportedAssets;
- (id)legacyApplicationItemsToImport;
- (id)legacyMyPhotoStreamLibraryIdentifier;
- (id)legacyStreamApplicationPrefix;
- (id)loggedIniCloudAccountDisplayNameInformation;
- (id)loggedIniCloudAccountQuotaInformation;
- (id)myPhotoStreamURL;
- (long long)rampStateForServiceIdentifier:(id)a0;
- (id)rawLegacyStatusInformation;
- (id)sharedStreamsPushServiceEnvironment;
- (id)sharedStreamsURL;
- (char)shouldStartServiceWithTargetState:(long long)a0;
- (char)systemPhotoLibraryIsAvailable;
- (long long)targetStateForServiceIdentifier:(id)a0;
- (void)validateDataVersion;

@end
