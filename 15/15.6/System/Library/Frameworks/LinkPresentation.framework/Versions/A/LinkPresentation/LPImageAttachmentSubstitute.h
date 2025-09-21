@interface LPImageAttachmentSubstitute : LPImage <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long index;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (char)_isSubstitute;

@end
