@interface SSCachedViewResultBuilder : SSResultBuilder

+ (char)isCoreSpotlightResult;
+ (char)supportsResult:(id)a0;

- (id)buildInlineCardSections;
- (char)supportsClearingBackendData;

@end
