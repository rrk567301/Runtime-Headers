@class NSString;

@interface NSFileProviderKernelPartialFolderMaterializationInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *fileName;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileName:(id)a0;

@end
