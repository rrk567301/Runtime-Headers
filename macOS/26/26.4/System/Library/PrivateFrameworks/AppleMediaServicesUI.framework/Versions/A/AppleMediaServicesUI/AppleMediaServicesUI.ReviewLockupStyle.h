@interface AppleMediaServicesUI.ReviewLockupStyle : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ placeholderCornerRadius;
    void /* unknown type, empty encoding */ showPlaceholder;
    void /* unknown type, empty encoding */ shape;
    void /* unknown type, empty encoding */ font;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
