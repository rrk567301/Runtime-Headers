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
- (BOOL)canEnableCloudPhotoLibraryForSystemPhotoLibrary;
- (unsigned long long)photosApplicationState;
- (id)preferencesValueForKey:(id)a0 serviceIdentifier:(id)a1;
- (BOOL)hasStatusProperty:(id)a0;
- (id)initWithInformationDictionary:(id)a0;
- (BOOL)shouldStartServiceWithTargetState:(long long)a0;
- (BOOL)systemPhotoLibraryIsAvailable;
- (long long)targetStateForServiceIdentifier:(id)a0;
- (void)validateDataVersion;

@end
