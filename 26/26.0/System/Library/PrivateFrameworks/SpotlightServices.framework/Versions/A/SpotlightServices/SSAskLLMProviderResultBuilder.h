@interface SSAskLLMProviderResultBuilder : SSResultBuilder

+ (BOOL)supportsResult:(id)a0;

- (id)buildCommand;
- (id)buildThumbnail;
- (id)buildTitle;

@end
