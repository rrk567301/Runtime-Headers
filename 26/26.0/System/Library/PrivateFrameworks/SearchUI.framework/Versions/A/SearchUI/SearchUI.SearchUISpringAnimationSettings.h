@class _TtC8SearchUI31SearchUISpringAnimationSettings, CABasicAnimation;

@interface SearchUI.SearchUISpringAnimationSettings : NSObject <SearchUI.SearchUIAnimationSettings>

@property (class, nonatomic, readonly) _TtC8SearchUI31SearchUISpringAnimationSettings *buttonSelection;
@property (class, nonatomic, readonly) _TtC8SearchUI31SearchUISpringAnimationSettings *buttonSelectionCancel;
@property (class, nonatomic, readonly) _TtC8SearchUI31SearchUISpringAnimationSettings *buttonIconAppear;

@property (nonatomic) double bounce;
@property (nonatomic) double perceptualDuration;
@property (nonatomic) double delay;
@property (nonatomic, readonly) CABasicAnimation *coreAnimation;

- (id)init;

@end
