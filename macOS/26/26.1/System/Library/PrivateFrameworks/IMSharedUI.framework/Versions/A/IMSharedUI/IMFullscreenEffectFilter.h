@class NSArray, NSColor, CAFilter;

@interface IMFullscreenEffectFilter : NSObject

@property long long type;
@property unsigned long long direction;
@property (copy) NSArray *balloonFilters;
@property (copy) NSArray *balloonBackdropFilters;
@property (copy) CAFilter *balloonCompositingFilter;
@property double balloonAlpha;
@property double contentAlpha;
@property (copy) CAFilter *textCompositingFilter;
@property (copy) NSColor *textColor;

- (void).cxx_destruct;
- (id)init;

@end
