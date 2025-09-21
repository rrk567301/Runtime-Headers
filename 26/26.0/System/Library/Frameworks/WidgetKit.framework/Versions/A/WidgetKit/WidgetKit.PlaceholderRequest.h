@interface WidgetKit.PlaceholderRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ extensionIdentity;
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ fileHandle;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
