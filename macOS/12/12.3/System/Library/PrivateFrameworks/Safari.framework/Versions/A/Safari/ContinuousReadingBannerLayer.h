@class NSString, NSImage, CALayer, NSAttributedString;

@interface ContinuousReadingBannerLayer : CALayer <CALayerDelegate> {
    CALayer *_backgroundLayer;
    CALayer *_primaryIconImageLayer;
    CALayer *_secondaryIconImageLayer;
    CALayer *_primaryTextLayer;
    CALayer *_secondaryTextLayer;
}

@property (readonly, retain, nonatomic) CALayer *primaryIconImageLayer;
@property (readonly, retain, nonatomic) CALayer *secondaryIconImageLayer;
@property (readonly, retain, nonatomic) CALayer *primaryTextLayer;
@property (readonly, retain, nonatomic) CALayer *secondaryTextLayer;
@property (copy, nonatomic) NSAttributedString *primaryTextTitle;
@property (copy, nonatomic) NSAttributedString *secondaryTextTitle;
@property (nonatomic) double scaleFactor;
@property (readonly, nonatomic) unsigned long long bannerLocation;
@property (nonatomic) unsigned long long bannerType;
@property (retain, nonatomic) NSImage *icon;
@property (nonatomic) BOOL iconDrawsDropShadowAndMask;
@property (retain, nonatomic) NSImage *secondaryIcon;
@property (copy, nonatomic) NSAttributedString *itemTitle;
@property (copy, nonatomic) NSString *itemDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)bannerHeight;
+ (double)footerBannerSeparatorHeight;

- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (void)layoutSublayers;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)_backgroundImage;
- (double)_rightMargin;
- (void)resizeWithOldSuperlayerSize:(struct CGSize { double x0; double x1; })a0;
- (double)_bannerSeparatorHeight;
- (void)_layOutTextLayers;
- (void)_updatePrimaryIconImageLayer;
- (void)_updateSecondaryIconImageLayer;
- (id)_createImageLayer;
- (id)_createTextLayer;
- (void)_layOutLayers;
- (void)_layOutIcons;
- (id)_textAttributesForPrimaryTextLayer;
- (id)_textAttributesForSecondaryTextLayer;
- (double)_ascenderForFontForPrimaryTextLayer;
- (double)_ascenderForFontForSecondaryTextLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_primaryIconImageViewFrame;
- (BOOL)_isSocial;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_secondaryIconImageViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_primaryTextLayerFrame;
- (id)_fontForPrimaryTextLayer;
- (double)_maxTextLayerXCoordinate;
- (double)_currentMaximumPrimaryTextLayerWidth;
- (id)_fontForSecondaryTextLayer;
- (double)_currentMaximumSecondaryTextLayerWidth;
- (id)initWithWidth:(double)a0 scaleFactor:(double)a1 bannerLocation:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_secondaryTextLayerFrame;

@end
