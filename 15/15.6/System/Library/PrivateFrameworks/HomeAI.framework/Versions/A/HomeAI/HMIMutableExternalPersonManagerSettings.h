@interface HMIMutableExternalPersonManagerSettings : HMIExternalPersonManagerSettings

@property (getter=isImportingFromPhotoLibraryEnabled) char importingFromPhotoLibraryEnabled;
@property (getter=isSharingFaceClassificationsEnabled) char sharingFaceClassificationsEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
