@interface WeatherDaemon.WeatherStatisticsProxyRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ dayDateInterval;
    void /* unknown type, empty encoding */ monthDateInterval;
    void /* unknown type, empty encoding */ options;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
