@class SSContactResultBuilder;

@interface SSContactEntitySectionBuilder : SSSectionBuilder

@property (weak, nonatomic) SSContactResultBuilder *contactResultBuilder;

- (void).cxx_destruct;
- (char)shouldSkipSection;

@end
