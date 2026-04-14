@interface GTCaptureUpdateHighlight : GTCaptureRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) BOOL enable;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
