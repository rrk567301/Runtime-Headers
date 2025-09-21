@class GTTelemetryConfiguration;

@interface GTTelemetryUpdateConfiguration : GTTelemetryRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GTTelemetryConfiguration *configuration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
