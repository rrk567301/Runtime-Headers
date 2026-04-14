@class NSString;

@interface _EXSandboxExtension : NSObject <NSSecureCoding>

@property (class, readonly) BOOL sandboxed;
@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long consumedSandboxExtension;
@property (retain) NSString *sandboxExtensionToken;

- (id)initWithURL:(id)a0 readonly:(BOOL)a1;
- (id)initWithExtensionClass:(id)a0 machServiceName:(id)a1 process:(struct { unsigned int x0[8]; })a2;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)consume;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
