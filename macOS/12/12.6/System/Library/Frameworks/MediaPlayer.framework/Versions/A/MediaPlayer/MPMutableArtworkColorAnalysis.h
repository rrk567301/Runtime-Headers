@class NSColor;

@interface MPMutableArtworkColorAnalysis : MPArtworkColorAnalysis

@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *primaryTextColor;
@property (retain, nonatomic) NSColor *secondaryTextColor;
@property (nonatomic, getter=isBackgroundColorLight) BOOL backgroundColorLight;
@property (nonatomic, getter=isPrimaryTextColorLight) BOOL primaryTextColorLight;
@property (nonatomic, getter=isSecondaryTextColorLight) BOOL secondaryTextColorLight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setPrimaryTextColor:(id)a0;
- (void)setSecondaryTextColor:(id)a0;
- (void)setBackgroundColorLight:(BOOL)a0;
- (void)setPrimaryTextColorLight:(BOOL)a0;
- (void)setSecondaryTextColorLight:(BOOL)a0;

@end
