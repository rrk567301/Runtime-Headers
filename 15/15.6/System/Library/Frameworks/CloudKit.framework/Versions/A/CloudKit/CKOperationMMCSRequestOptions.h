@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char resumableContainerLimpMode;
@property char chunkingLibraryCorruptionMode;
@property char insufficientDiskSpaceMode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
