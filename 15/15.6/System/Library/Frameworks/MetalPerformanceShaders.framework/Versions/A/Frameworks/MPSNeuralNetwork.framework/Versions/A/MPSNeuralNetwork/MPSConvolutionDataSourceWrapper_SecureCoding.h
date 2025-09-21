@interface MPSConvolutionDataSourceWrapper_SecureCoding : MPSConvolutionDataSourceWrapper <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (char)respondsToSelector:(SEL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
