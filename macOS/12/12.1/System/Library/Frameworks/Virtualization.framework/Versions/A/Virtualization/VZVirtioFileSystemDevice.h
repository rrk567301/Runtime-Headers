@class NSString, VZVirtioFileSystemDeviceConfiguration, VZDirectoryShare;

@interface VZVirtioFileSystemDevice : VZDirectorySharingDevice {
    VZVirtioFileSystemDeviceConfiguration *_configuration;
}

@property (readonly, copy) NSString *tag;
@property (retain) VZDirectoryShare *share;

- (void).cxx_destruct;

@end
