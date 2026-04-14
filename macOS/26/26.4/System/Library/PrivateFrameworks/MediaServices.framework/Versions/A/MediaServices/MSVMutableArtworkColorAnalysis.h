@class NSString, NSNumber, NSArray;

@interface MSVMutableArtworkColorAnalysis : MSVArtworkColorAnalysis

@property (retain, nonatomic) NSString *backgroundColorHex;
@property (retain, nonatomic) NSString *primaryTextColorHex;
@property (retain, nonatomic) NSString *secondaryTextColorHex;
@property (retain, nonatomic) NSString *tertiaryTextColorHex;
@property (retain, nonatomic) NSString *quaternaryTextColorHex;
@property (retain, nonatomic) NSString *gradientColorHex;
@property (retain, nonatomic) NSNumber *gradientColorStartPosition;
@property (retain, nonatomic) NSNumber *gradientColorEndPosition;
@property (retain, nonatomic) NSArray *gradientTextColorHex;
@property (nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;
@property (nonatomic, getter=isTertiaryTextColorLight) BOOL tertiaryTextColorLight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPrimaryTextColor:(id)a0;
- (void)setBackgroundColorLight:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setSecondaryTextColor:(id)a0;
- (void)setGradientColorEndSize:(id)a0;
- (void)setGradientColorHex:(id)a0;
- (void)setGradientColorStartSize:(id)a0;
- (void)setGradientTextColorHex:(id)a0;
- (void)setPrimaryTextColorLight:(BOOL)a0;
- (void)setQuaternaryTextColorHex:(id)a0;
- (void)setSecondaryTextColorLight:(BOOL)a0;
- (void)setTertiaryTextColor:(id)a0;
- (void)setTertiaryTextColorLight:(BOOL)a0;

@end
