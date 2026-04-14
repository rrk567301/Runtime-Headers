@class NSString;

@interface NSFileProviderKernelPartialFolderMaterializationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *fileName;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFileName:(id)a0;
- (void)dealloc;

@end
