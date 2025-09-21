@interface AppKit.UnbridgedMenuBarSettings : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ perMenuBarSettings;
    void /* unknown type, empty encoding */ globalSettings;
    void /* unknown type, empty encoding */ applicationTitle;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
