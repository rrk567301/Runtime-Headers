@interface SSFindMyResultBuilder : SSContactResultBuilder

+ (id)bundleId;

- (id)buildCompactCard;
- (id)buildResult;
- (id)resultIdentifier;
- (id)buildInlineCard;
- (id)buildHorizontallyScrollingCardSection;
- (id)fmfPunchoutURL;

@end
