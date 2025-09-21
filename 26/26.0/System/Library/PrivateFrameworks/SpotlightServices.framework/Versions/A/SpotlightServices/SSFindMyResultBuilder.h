@interface SSFindMyResultBuilder : SSContactResultBuilder

+ (id)bundleId;

- (id)buildInlineCard;
- (id)buildCompactCard;
- (id)resultIdentifier;
- (id)buildHorizontallyScrollingCardSection;
- (id)buildResult;

@end
