@interface CoreIDVShared.IdentityProofingUIConfig : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subTitle;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ primaryButtonTitle;
    void /* unknown type, empty encoding */ secondaryButtonTitle;
    void /* unknown type, empty encoding */ tertiaryButtonTitle;
    void /* unknown type, empty encoding */ privacyLinkButtonTitle;
    void /* unknown type, empty encoding */ messages;
    void /* unknown type, empty encoding */ fields;
    void /* unknown type, empty encoding */ caption;
    void /* unknown type, empty encoding */ minLength;
    void /* unknown type, empty encoding */ maxLength;
    void /* unknown type, empty encoding */ placeholder;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ imageAssetsData;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ privacyLinkIdentifier;
    void /* unknown type, empty encoding */ isUIEnabled;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
