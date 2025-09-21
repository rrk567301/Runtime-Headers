@interface SearchUIBackgroundView : NSView

@property (nonatomic) char shouldUseInsetRoundedSections;
@property (nonatomic, getter=isInPreviewPlatter) char inPreviewPlatter;

- (id)init;

@end
