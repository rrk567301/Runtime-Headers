@interface SearchUIAppCompletion : SearchUICompletion

+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;

- (id)prefixMatchExtensionString;
- (BOOL)completionResultIsPotentiallyPunchout;

@end
