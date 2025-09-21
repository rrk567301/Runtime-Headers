@interface SearchUIWebCompletion : SearchUICompletion

+ (char)cardSectionIsWeb:(id)a0;
+ (char)supportsResult:(id)a0 cardSection:(id)a1;

- (id)image;
- (char)completionResultIsPotentiallyPunchout;
- (id)nonPrefixMatchExtensionString;
- (id)prefixMatchExtensionString;

@end
