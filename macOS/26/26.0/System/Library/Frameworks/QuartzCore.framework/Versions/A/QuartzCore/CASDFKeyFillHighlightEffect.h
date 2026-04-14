@interface CASDFKeyFillHighlightEffect : CASDFEffect

@property (retain, nonatomic) struct CGColor { } *keyColor;
@property (nonatomic) double keyHeightScale;
@property (nonatomic) double keyHeightOffset;
@property (nonatomic) double keySpreadScale;
@property (nonatomic) double keySpreadOffset;
@property (retain, nonatomic) struct CGColor { } *fillColor;
@property (nonatomic) double fillHeightScale;
@property (nonatomic) double fillHeightOffset;
@property (nonatomic) double fillSpreadScale;
@property (nonatomic) double fillSpreadOffset;
@property (nonatomic) double keyHeight;
@property (nonatomic) double keyAngle;
@property (nonatomic) double keySpread;
@property (nonatomic) double keyAmount;
@property (nonatomic) double fillHeight;
@property (nonatomic) double fillAngle;
@property (nonatomic) double fillSpread;
@property (nonatomic) double fillAmount;
@property (nonatomic) double curvature;
@property (nonatomic) BOOL global;

+ (id)defaultValues;
+ (id)CA_attributes;
+ (id)name;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)configureLayer:(void *)a0 transaction:(void *)a1;

@end
