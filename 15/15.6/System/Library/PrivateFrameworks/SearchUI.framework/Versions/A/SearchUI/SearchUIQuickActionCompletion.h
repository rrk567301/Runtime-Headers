@interface SearchUIQuickActionCompletion : SearchUICompletion

+ (char)supportsResult:(id)a0 cardSection:(id)a1;

- (id)image;
- (char)completionResultIsPotentiallyPunchout;
- (id)prefixMatchExtensionString;

@end
