@interface NSFileProviderKernelFileMaterializationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long size;
@property (readonly) long long offset;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSize:(long long)a0 offset:(long long)a1;

@end
