@interface SearchUIShowMoreCompletion : SearchUICompletion

+ (BOOL)supportsResult:(id)a0 cardSection:(id)a1;
+ (BOOL)resultIsContact:(id)a0;
+ (BOOL)resultIsStoreSheet:(id)a0;

- (id)image;
- (id)prefixMatchExtensionString;

@end
