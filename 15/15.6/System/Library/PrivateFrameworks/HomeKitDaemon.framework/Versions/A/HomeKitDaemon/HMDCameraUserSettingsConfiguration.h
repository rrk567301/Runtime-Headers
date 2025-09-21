@interface HMDCameraUserSettingsConfiguration : HMFObject

@property (readonly, getter=isSharingFaceClassificationsEnabled) char sharingFaceClassificationsEnabled;
@property (readonly, getter=isImportingFromPhotoLibraryEnabled) char importingFromPhotoLibraryEnabled;
@property (readonly, getter=isOwner) char owner;

- (id)initWithUser:(id)a0;

@end
