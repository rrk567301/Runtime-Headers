@class CABasicAnimation;

@interface SearchUI.SearchUIBasicAnimationSettings : NSObject <SearchUI.SearchUIAnimationSettings>

@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic, readonly) CABasicAnimation *coreAnimation;

- (id)init;

@end
