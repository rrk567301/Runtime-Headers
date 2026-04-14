@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL resumableContainerLimpMode;
@property BOOL chunkingLibraryCorruptionMode;
@property BOOL insufficientDiskSpaceMode;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
