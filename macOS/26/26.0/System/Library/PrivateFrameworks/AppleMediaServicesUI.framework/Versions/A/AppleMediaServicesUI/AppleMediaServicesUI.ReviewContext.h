@interface AppleMediaServicesUI.ReviewContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ accentColor;
    void /* unknown type, empty encoding */ lockupStyle;
    void /* unknown type, empty encoding */ lockupDetails;
    void /* unknown type, empty encoding */ mediaTaskType;
    void /* unknown type, empty encoding */ clientInfo;
    void /* unknown type, empty encoding */ itemIdentifier;
    void /* unknown type, empty encoding */ itemVersion;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
