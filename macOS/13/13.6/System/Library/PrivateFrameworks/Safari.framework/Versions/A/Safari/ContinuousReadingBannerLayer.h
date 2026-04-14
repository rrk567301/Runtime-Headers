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
- (void)layoutSublayers;
- (id)_backgroundImage;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setContentsScale:(double)a0;
- (double)_rightMargin;
- (void)resizeWithOldSuperlayerSize:(struct CGSize { double x0; double x1; })a0;
- (double)_ascenderForFontForPrimaryTextLayer;
- (double)_ascenderForFontForSecondaryTextLayer;
- (double)_bannerSeparatorHeight;
- (id)_createImageLayer;
- (id)_createTextLayer;
- (double)_currentMaximumPrimaryTextLayerWidth;
- (double)_currentMaximumSecondaryTextLayerWidth;
- (id)_fontForPrimaryTextLayer;
- (id)_fontForSecondaryTextLayer;
- (BOOL)_isSocial;
- (void)_layOutIcons;
- (void)_layOutLayers;
- (void)_layOutTextLayers;
- (double)_maxTextLayerXCoordinate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_primaryIconImageViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_primaryTextLayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_secondaryIconImageViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_secondaryTextLayerFrame;
- (id)_textAttributesForPrimaryTextLayer;
- (id)_textAttributesForSecondaryTextLayer;
- (void)_updatePrimaryIconImageLayer;
- (void)_updateSecondaryIconImageLayer;
- (id)initWithWidth:(double)a0 scaleFactor:(double)a1 bannerLocation:(unsigned long long)a2;

@end
