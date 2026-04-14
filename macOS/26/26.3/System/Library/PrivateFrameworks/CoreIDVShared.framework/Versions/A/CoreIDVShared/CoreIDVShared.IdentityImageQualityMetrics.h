@interface CoreIDVShared.IdentityImageQualityMetrics : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _inlineMetrics;
    void /* unknown type, empty encoding */ _captureMetrics;
    void /* unknown type, empty encoding */ _videoMetrics;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
