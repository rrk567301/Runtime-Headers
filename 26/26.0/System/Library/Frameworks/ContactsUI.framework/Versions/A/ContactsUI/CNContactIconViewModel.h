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
+ (BOOL)contactHasMonogram:(id)a0;
+ (BOOL)contactHasPhoto:(id)a0;
+ (BOOL)contactShowsAsCompany:(id)a0;
+ (id)initialsForContact:(id)a0;

- (id)foregroundColor;
- (id)borderColor;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)image;
- (BOOL)shouldDrawBorder;
- (void)setBackgroundStyle:(long long)a0;
- (double)borderWidth;
- (void).cxx_destruct;
- (id)effectiveAppearance;
- (id)silhouetteImage;
- (id)contactDerivedLikeness;
- (long long)effectiveOrganizationIconType;
- (long long)effectivePersonIconType;
- (double)fontSizeForDiameter:(double)a0;
- (double)fontWeightForDiameter:(double)a0;
- (id)likenessImageMaskedByCircle:(BOOL)a0;
- (id)monogramFontForDiameter:(double)a0;
- (id)monogramImage;
- (id)monogramString;
- (id)photoImage;
- (long long)typeForImageLoading;

@end
