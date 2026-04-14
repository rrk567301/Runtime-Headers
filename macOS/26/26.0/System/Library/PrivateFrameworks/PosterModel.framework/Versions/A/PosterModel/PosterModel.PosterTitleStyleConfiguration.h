@interface PosterModel.PosterTitleStyleConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ timeFontConfiguration;
    void /* unknown type, empty encoding */ preferredTitleAlignment;
    void /* unknown type, empty encoding */ preferredTitleLayout;
    void /* unknown type, empty encoding */ titleContentStyle;
    void /* unknown type, empty encoding */ titleColor;
    void /* unknown type, empty encoding */ timeNumberingSystem;
    void /* unknown type, empty encoding */ contentsLuminance;
    void /* unknown type, empty encoding */ groupName;
    void /* unknown type, empty encoding */ isUserConfigured;
    void /* unknown type, empty encoding */ isAlternateDateEnabled;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
