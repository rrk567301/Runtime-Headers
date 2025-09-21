@class NSData, NSURL;

@interface _EXItemProviderSandboxedResource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *sandboxExtensionToken;
@property (copy, nonatomic) NSURL *resourceURL;
@property (nonatomic, getter=isAccessingSecurityScopedResource) char accessingSecurityScopedResource;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfURL:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 error:(id *)a2;
- (id)resolveURLAndReturnError:(id *)a0;

@end
