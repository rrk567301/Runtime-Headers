@interface ICNAReferringInboundURLFilter : NSObject

+ (id)filterURLByLogicalReplacements:(id)a0;
+ (id)allowedTieredPrefixReplacements;
+ (id)filterReferringInboundURL:(id)a0;
+ (id)filterStringByAllowedTieredPrefixReplacements:(id)a0;
+ (BOOL)foundMatchingPrefixAmongCandidates:(id)a0 forInputString:(id)a1 matchingPrefixInplaceResult:(id *)a2;

@end
