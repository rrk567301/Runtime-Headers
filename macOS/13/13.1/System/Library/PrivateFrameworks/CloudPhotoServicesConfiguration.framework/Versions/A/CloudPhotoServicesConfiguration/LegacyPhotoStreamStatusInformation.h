@class NSString, NSObject;
@protocol CPSStatusInformation;

@interface LegacyPhotoStreamStatusInformation : NSObject <CPSStatusInformation>

@property (retain) NSObject<CPSStatusInformation> *statusInformation;
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
- (id)initWithStatusInformation:(id)a0;

@end
