@class NSColor, NSArray, NSNumber;

@interface MPMutableArtworkColorAnalysis : MPArtworkColorAnalysis

@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *primaryTextColor;
@property (retain, nonatomic) NSColor *secondaryTextColor;
@property (retain, nonatomic) NSColor *tertiaryTextColor;
@property (retain, nonatomic) NSColor *quaternaryTextColor;
@property (retain, nonatomic) NSColor *gradientColor;
@property (retain, nonatomic) NSArray *gradientTextColors;
@property (retain, nonatomic) NSNumber *gradientColorStartPosition;
@property (retain, nonatomic) NSNumber *gradientColorEndPosition;
@property (nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;
@property (nonatomic, getter=isTertiaryTextColorLight) BOOL tertiaryTextColorLight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPrimaryTextColor:(id)a0;
- (void)setBackgroundColorLight:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setSecondaryTextColor:(id)a0;
- (void)setGradientColorEndPosition:(id)a0;
- (void)setGradientColorStartPosition:(id)a0;
- (void)setPrimaryTextColorLight:(BOOL)a0;
- (void)setSecondaryTextColorLight:(BOOL)a0;
- (void)setTertiaryTextColor:(id)a0;
- (void)setTertiaryTextColorLight:(BOOL)a0;
- (void)setGradientColor:(id)a0;
- (void)setGradientTextColors:(id)a0;
- (void)setQuaternaryTextColor:(id)a0;

@end
