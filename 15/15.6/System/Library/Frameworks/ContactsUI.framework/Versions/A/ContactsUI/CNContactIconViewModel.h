@class CNContactIconAppearance, PRLikeness, CNContact;

@interface CNContactIconViewModel : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (retain) CNContactIconAppearance *appearance;
@property (retain) CNContactIconAppearance *selectedAppearance;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) PRLikeness *likeness;
@property (nonatomic) char selected;
@property (nonatomic) char monogramOnly;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double diameter;

+ (char)contactHasDerivedLikeness:(id)a0;
+ (char)contactHasMonogram:(id)a0;
+ (char)contactHasPhoto:(id)a0;
+ (char)contactShowsAsCompany:(id)a0;
+ (id)initialsForContact:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)borderColor;
- (id)image;
- (id)effectiveAppearance;
- (id)backgroundColor;
- (id)foregroundColor;
- (double)borderWidth;
- (void)setBackgroundStyle:(long long)a0;
- (char)shouldDrawBorder;
- (id)silhouetteImage;
- (id)contactDerivedLikeness;
- (long long)effectiveOrganizationIconType;
- (long long)effectivePersonIconType;
- (double)fontSizeForDiameter:(double)a0;
- (double)fontWeightForDiameter:(double)a0;
- (id)likenessImageMaskedByCircle:(char)a0;
- (id)monogramFontForDiameter:(double)a0;
- (id)monogramImage;
- (id)monogramString;
- (id)photoImage;
- (long long)typeForImageLoading;

@end
