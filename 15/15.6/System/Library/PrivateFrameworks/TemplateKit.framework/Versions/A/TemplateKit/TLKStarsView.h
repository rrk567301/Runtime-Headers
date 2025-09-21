@class NSFont;

@interface TLKStarsView : TLKStackView

@property (nonatomic) double currentStarRating;
@property (nonatomic) double starRating;
@property (retain, nonatomic) NSFont *font;
@property (nonatomic) char useCompactMode;

- (id)init;
- (void).cxx_destruct;
- (void)updateStarImages;

@end
