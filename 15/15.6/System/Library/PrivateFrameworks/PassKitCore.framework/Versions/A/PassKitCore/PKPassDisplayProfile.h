@class PKColor, NSData;

@interface PKPassDisplayProfile : PKDisplayProfile <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long passStyle;
@property (retain, nonatomic) PKColor *backgroundColor;
@property (retain, nonatomic) PKColor *secondaryBackgroundColor;
@property (retain, nonatomic) PKColor *foregroundColor;
@property (retain, nonatomic) PKColor *labelColor;
@property (retain, nonatomic) PKColor *stripColor;
@property (retain, nonatomic) NSData *manifestHash;
@property (nonatomic) char tallCode;
@property (nonatomic) char hasBackgroundImage;
@property (nonatomic) char hasStripImage;
@property (nonatomic) char supportsAutomaticForegroundVibrancy;
@property (nonatomic) char supportsAutomaticLabelVibrancy;
@property (nonatomic) char suppressesHeaderDarkening;
@property (retain, nonatomic) PKColor *footerBackgroundColor;
@property (readonly, nonatomic) char showsBackgroundImage;
@property (readonly, nonatomic) char showsStripImage;
@property (readonly, nonatomic) long long layoutMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;

@end
