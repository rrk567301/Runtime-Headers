@class GTTelemetryConfiguration;

@interface GTTelemetryUpdateConfiguration : GTTelemetryRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GTTelemetryConfiguration *configuration;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
