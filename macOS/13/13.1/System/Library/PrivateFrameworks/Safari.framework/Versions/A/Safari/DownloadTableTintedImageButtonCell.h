@interface DownloadTableTintedImageButtonCell : TintedImageButtonCell

@property (getter=isOrangeOnLightBackground) BOOL orangeOnLightBackground;

- (id)tintColor;
- (void)setTintColor:(id)a0;
- (void)setImageAlpha:(double)a0;
- (double)imageAlpha;

@end
