@class GTCaptureConfiguration;

@interface GTCaptureUpdateConfiguration : GTCaptureRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) GTCaptureConfiguration *configuration;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
