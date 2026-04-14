@interface CoreIDVShared.IdentityImageQualityMetrics : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _inlineMetrics;
    void /* unknown type, empty encoding */ _captureMetrics;
    void /* unknown type, empty encoding */ _videoMetrics;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
