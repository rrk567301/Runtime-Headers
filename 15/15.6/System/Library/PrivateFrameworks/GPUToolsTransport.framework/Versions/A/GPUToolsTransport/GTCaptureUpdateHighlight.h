@interface GTCaptureUpdateHighlight : GTCaptureRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) char enable;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
