@class NSColor;

@interface MPMutableArtworkColorAnalysis : MPArtworkColorAnalysis

@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *primaryTextColor;
@property (retain, nonatomic) NSColor *secondaryTextColor;
@property (retain, nonatomic) NSColor *tertiaryTextColor;
@property (nonatomic, getter=isBackgroundColorLight) char backgroundColorLight;
@property (nonatomic, getter=isPrimaryTextColorLight) char primaryTextColorLight;
@property (nonatomic, getter=isSecondaryTextColorLight) char secondaryTextColorLight;
@property (nonatomic, getter=isTertiaryTextColorLight) char tertiaryTextColorLight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setPrimaryTextColor:(id)a0;
- (void)setSecondaryTextColor:(id)a0;
- (void)setBackgroundColorLight:(char)a0;
- (void)setPrimaryTextColorLight:(char)a0;
- (void)setSecondaryTextColorLight:(char)a0;
- (void)setTertiaryTextColor:(id)a0;
- (void)setTertiaryTextColorLight:(char)a0;

@end
