@interface SSSnippetUtilities : NSObject

+ (id)collectTokensFromAnswer:(id)a0;
+ (id)collectTokensFromQueryContext:(id)a0 result:(id)a1;
+ (void)createFormattedSnippetForResult:(id)a0 withQuery:(id)a1 queryTokens:(id)a2 isSearchToolClient:(BOOL)a3;
+ (id)createFormattedSnippetWithQuery:(id)a0 fullText:(id)a1 queryTokens:(id)a2 answer:(id)a3;
+ (id)createFormattedSnippetWithQuery:(id)a0 fullText:(id)a1 queryTokens:(id)a2 answer:(id)a3 maxSnippetLength:(long long)a4;
+ (BOOL)isSnippetSupportedForBundleIDType:(unsigned long long)a0;

@end
