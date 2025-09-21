@interface SPUISFindMyResultBuilder : SPUISContactResultBuilder

+ (id)bundleId;

- (id)buildInlineCard;
- (id)buildCompactCard;
- (id)resultIdentifier;
- (id)buildHorizontallyScrollingCardSection;
- (id)buildResult;
- (id)fmfPunchoutURL;

@end
