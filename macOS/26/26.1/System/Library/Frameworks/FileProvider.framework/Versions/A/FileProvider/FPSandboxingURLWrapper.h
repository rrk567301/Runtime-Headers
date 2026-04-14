@class NSURL, NSData;

@interface FPSandboxingURLWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *url;
@property (retain) NSURL *promiseURL;
@property (retain) FPSandboxingURLWrapper *originalDocumentURLWrapper;
@property (retain) NSData *scope;
@property (retain) NSData *promiseScope;

+ (id)wrapperWithURL:(id)a0 readonly:(BOOL)a1 error:(id *)a2;
+ (id)wrapperWithURL:(id)a0 extensionClass:(const char *)a1 report:(BOOL)a2 error:(id *)a3;
+ (void)assembleURL:(id)a0 sandbox:(id)a1 physicalURL:(id)a2 physicalSandbox:(id)a3;
+ (id)wrapperWithURL:(id)a0 readonly:(BOOL)a1;
+ (id)wrapperWithURL:(id)a0;
+ (id)wrapperWithURL:(id)a0 extensionClass:(const char *)a1 error:(id *)a2;
+ (id)wrapperWithSecurityScopedURL:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)description;
- (id)initWithURL:(id)a0 extensionClass:(const char *)a1 report:(BOOL)a2 error:(id *)a3;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
