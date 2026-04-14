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

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
