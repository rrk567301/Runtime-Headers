@interface WeatherDaemon.AvailabilityProxyRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ options;
}

@property (class, nonatomic) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
