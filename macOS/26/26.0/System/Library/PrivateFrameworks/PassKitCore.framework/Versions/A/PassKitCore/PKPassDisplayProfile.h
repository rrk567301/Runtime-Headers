@class PKColor, NSData;

@interface PKPassDisplayProfile : PKDisplayProfile <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long passStyle;
@property (retain, nonatomic) PKColor *backgroundColor;
@property (retain, nonatomic) PKColor *secondaryBackgroundColor;
@property (retain, nonatomic) PKColor *foregroundColor;
@property (retain, nonatomic) PKColor *labelColor;
@property (retain, nonatomic) PKColor *stripColor;
@property (retain, nonatomic) NSData *manifestHash;
@property (nonatomic) BOOL tallCode;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) BOOL hasStripImage;
@property (nonatomic) BOOL supportsAutomaticForegroundVibrancy;
@property (nonatomic) BOOL supportsAutomaticLabelVibrancy;
@property (nonatomic) BOOL suppressesHeaderDarkening;
@property (retain, nonatomic) PKColor *footerBackgroundColor;
@property (readonly, nonatomic) BOOL showsBackgroundImage;
@property (readonly, nonatomic) BOOL showsStripImage;
@property (readonly, nonatomic) long long layoutMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (long long)layoutModeForScreenSize:(struct CGSize { double x0; double x1; })a0;

@end
