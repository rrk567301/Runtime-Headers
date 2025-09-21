@interface SPUISCachedViewResultBuilder : SPUISResultBuilder

+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)buildInlineCardSections;
- (BOOL)supportsClearingBackendData;

@end
