@class NSString, NSError;

@interface PLFileSystemCapabilities : NSObject {
    unsigned int _interfacesCapabilities;
    unsigned int _nativeCommonAttributes;
    char _fstypename[16];
}

@property (class, readonly) unsigned long long minimumAvailableBytesRequiredForLibraryOpen;

@property (readonly) char isReadOnly;
@property (readonly) char isCloneCapable;
@property (readonly) char isWholeFileLockCapable;
@property (readonly) char isGenCountCapable;
@property (readonly) char isSecludeRenameCapable;
@property (readonly) char isLocalVolume;
@property (readonly) char isInternalVolume;
@property (readonly) char isRootFileSystemVolume;
@property (readonly) char supportsDataProtection;
@property (readonly) NSString *fileSystemTypeName;
@property (readonly) char isNetworkVolume;
@property (readonly) char isCentralizedCacheDeleteCapable;
@property (readonly, getter=isWholeFileLockCapable) char isCoreDataCapable;
@property (readonly, getter=isGenCountCapable) char isCloudPhotoLibraryCapable;
@property (readonly) char isValid;
@property (readonly) NSError *error;

+ (id)capabilitiesWithURL:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (char)determineCapabilitiesWithURL:(id)a0 error:(id *)a1;

@end
