@class NSURL, NSData;

@interface FPSandboxingURLWrapper : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSURL *url;
@property (retain) NSURL *promiseURL;
@property (retain) FPSandboxingURLWrapper *originalDocumentURLWrapper;
@property (retain) NSData *scope;
@property (retain) NSData *promiseScope;

+ (id)wrapperWithURL:(id)a0 readonly:(char)a1 error:(id *)a2;
+ (id)wrapperWithURL:(id)a0;
+ (void)assembleURL:(id)a0 sandbox:(id)a1 physicalURL:(id)a2 physicalSandbox:(id)a3;
+ (id)wrapperWithSecurityScopedURL:(id)a0;
+ (id)wrapperWithURL:(id)a0 extensionClass:(const char *)a1 error:(id *)a2;
+ (id)wrapperWithURL:(id)a0 extensionClass:(const char *)a1 report:(char)a2 error:(id *)a3;
+ (id)wrapperWithURL:(id)a0 readonly:(char)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)initWithURL:(id)a0 extensionClass:(const char *)a1 report:(char)a2 error:(id *)a3;

@end
