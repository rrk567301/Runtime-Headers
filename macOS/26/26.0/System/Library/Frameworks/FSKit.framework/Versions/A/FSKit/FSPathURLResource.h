@class NSURL, NSSecurityScopedURLWrapper;

@interface FSPathURLResource : FSResource

@property (retain) NSSecurityScopedURLWrapper *urlWrapper;
@property (readonly, copy) NSURL *url;
@property (readonly, getter=isWritable) BOOL writable;

+ (BOOL)supportsSecureCoding;
+ (id)secureResourceWithURL:(id)a0 readonly:(BOOL)a1;
+ (id)resourceWithURL:(id)a0;

- (id)URL;
- (Class)classForCoder;
- (long long)kind;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1;
- (id)makeProxy;
- (id)getResourceID;
- (id)initAsSecureURL:(id)a0 readOnly:(BOOL)a1;
- (id)initAsSecureURL:(id)a0 writable:(BOOL)a1;
- (id)initWithURL:(id)a0 writable:(BOOL)a1;

@end
