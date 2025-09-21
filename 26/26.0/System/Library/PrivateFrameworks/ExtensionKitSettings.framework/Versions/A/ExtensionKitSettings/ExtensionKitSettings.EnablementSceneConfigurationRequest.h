@interface ExtensionKitSettings.EnablementSceneConfigurationRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ extensionPointGroup;
    void /* unknown type, empty encoding */ focusedExtensionIdentifier;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ descriptiveText;
    void /* unknown type, empty encoding */ icon;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
