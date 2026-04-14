@class CNContactIconAppearance, PRLikeness, CNContact;

@interface CNContactIconViewModel : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (retain) CNContactIconAppearance *appearance;
@property (retain) CNContactIconAppearance *selectedAppearance;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) PRLikeness *likeness;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL monogramOnly;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double diameter;

+ (BOOL)contactHasDerivedLikeness:(id)a0;
+ (BOOL)contactHasPhoto:(id)a0;
+ (BOOL)contactHasMonogram:(id)a0;
+ (id)initialsForContact:(id)a0;
+ (BOOL)contactShowsAsCompany:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)borderColor;
- (id)effectiveAppearance;
- (id)image;
- (id)backgroundColor;
- (double)borderWidth;
- (void)setBackgroundStyle:(long long)a0;
- (id)foregroundColor;
- (BOOL)shouldDrawBorder;
- (long long)effectiveOrganizationIconType;
- (long long)effectivePersonIconType;
- (long long)typeForImageLoading;
- (id)monogramImage;
- (id)photoImage;
- (id)silhouetteImage;
- (id)monogramString;
- (id)monogramFontForDiameter:(double)a0;
- (double)fontSizeForDiameter:(double)a0;
- (double)fontWeightForDiameter:(double)a0;
- (id)contactDerivedLikeness;
- (id)likenessImageMaskedByCircle:(BOOL)a0;

@end
