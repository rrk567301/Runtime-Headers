@interface WFPosterPickerParameter : WFParameter

@property (readonly, nonatomic) char shouldOnlyShowEligiblePhotosPosters;
@property (readonly, nonatomic) char handlesDefaultPoster;

- (Class)singleStateClass;

@end
