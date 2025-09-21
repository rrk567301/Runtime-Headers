@class SPUISContactResultBuilder;

@interface SPUISContactEntitySectionBuilder : SPUISSectionBuilder

@property (weak, nonatomic) SPUISContactResultBuilder *contactResultBuilder;

- (void).cxx_destruct;
- (BOOL)shouldSkipSection;

@end
