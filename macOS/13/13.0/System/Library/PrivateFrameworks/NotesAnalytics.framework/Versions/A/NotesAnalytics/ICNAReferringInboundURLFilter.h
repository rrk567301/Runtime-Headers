@interface ICNAReferringInboundURLFilter : NSObject

+ (id)filterReferringInboundURL:(id)a0;
+ (id)filterStringByAllowedTieredPrefixReplacements:(id)a0;
+ (id)filterURLByLogicalReplacements:(id)a0;
+ (id)allowedTieredPrefixReplacements;
+ (BOOL)foundMatchingPrefixAmongCandidates:(id)a0 forInputString:(id)a1 matchingPrefixInplaceResult:(id *)a2;

@end
