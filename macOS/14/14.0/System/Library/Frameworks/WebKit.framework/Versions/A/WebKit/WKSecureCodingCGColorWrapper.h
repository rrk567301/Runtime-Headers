@interface WKSecureCodingCGColorWrapper : NSObject <NSSecureCoding> {
    struct RetainPtr<CGColor *> { void *m_ptr; } m_wrappedColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGColor { } *wrappedColor;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCGColor:(struct CGColor { } *)a0;

@end
