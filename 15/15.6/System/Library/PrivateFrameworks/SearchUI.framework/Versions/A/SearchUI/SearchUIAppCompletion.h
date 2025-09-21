@interface SearchUIAppCompletion : SearchUICompletion

+ (char)supportsResult:(id)a0 cardSection:(id)a1;

- (char)completionResultIsPotentiallyPunchout;
- (id)prefixMatchExtensionString;

@end
