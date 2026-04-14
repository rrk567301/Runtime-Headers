@interface SearchUIWebCompletion : SearchUICompletion

+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;
+ (BOOL)cardSectionIsWeb:(id)a0;

- (id)image;
- (id)nonPrefixMatchExtensionString;
- (id)prefixMatchExtensionString;
- (BOOL)completionResultIsPotentiallyPunchout;

@end
