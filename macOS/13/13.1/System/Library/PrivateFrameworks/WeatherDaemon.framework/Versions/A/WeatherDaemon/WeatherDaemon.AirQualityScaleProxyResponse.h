@interface WeatherDaemon.AirQualityScaleProxyResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ scale;
    void /* unknown type, empty encoding */ error;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
