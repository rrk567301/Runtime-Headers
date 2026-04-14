@interface WidgetKit.ActivityWidgetRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ descriptor;
    void /* unknown type, empty encoding */ defaultPayload;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ payloadMetadata;
    void /* unknown type, empty encoding */ fileHandle;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ archiveVersion;
    void /* unknown type, empty encoding */ jindoEnvironment;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
