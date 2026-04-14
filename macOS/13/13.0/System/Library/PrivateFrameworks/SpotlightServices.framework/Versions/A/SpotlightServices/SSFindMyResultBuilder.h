@interface SSFindMyResultBuilder : SSContactResultBuilder

+ (id)bundleId;

- (id)buildResult;
- (id)buildCompactCard;
- (id)resultIdentifier;
- (id)fmfPunchoutURL;
- (id)buildInlineCard;
- (id)buildHorizontallyScrollingCardSection;

@end
