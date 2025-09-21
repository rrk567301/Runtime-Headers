@class NSString;

@interface _EXSandboxExtension : NSObject <NSSecureCoding>

@property (class, readonly) char sandboxed;
@property (class, readonly) char supportsSecureCoding;

@property unsigned long long consumedSandboxExtension;
@property (retain) NSString *sandboxExtensionToken;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 readonly:(char)a1;
- (char)consume;
- (id)initWithExtensionClass:(id)a0 machServiceName:(id)a1 process:(struct { unsigned int x0[8]; })a2;

@end
