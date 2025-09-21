@interface HMMutablePhotosPersonManagerSettings : HMPhotosPersonManagerSettings

@property (getter=isImportingFromPhotoLibraryEnabled) char importingFromPhotoLibraryEnabled;
@property (getter=isSharingFaceClassificationsEnabled) char sharingFaceClassificationsEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEnabled:(char)a0;
- (void)setSharingFaceClassificationsAllowed:(char)a0;

@end
