@class NSString, VZVirtioFileSystemDeviceConfiguration, VZDirectoryShare;

@interface VZVirtioFileSystemDevice : VZDirectorySharingDevice {
    VZVirtioFileSystemDeviceConfiguration *_configuration;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
}

@property (readonly, copy) NSString *tag;
@property (retain) VZDirectoryShare *share;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
