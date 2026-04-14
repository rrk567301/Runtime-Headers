@class NSURL;

@interface WKSecureCodingURLWrapper : NSURL <NSSecureCoding> {
    struct RetainPtr<NSURL> { void *m_ptr; } m_wrappedURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *wrappedURL;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id).cxx_construct;

@end
