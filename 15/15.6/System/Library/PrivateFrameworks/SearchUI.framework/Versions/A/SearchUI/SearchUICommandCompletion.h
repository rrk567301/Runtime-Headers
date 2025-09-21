@interface SearchUICommandCompletion : SearchUICompletion

+ (char)supportsResult:(id)a0 cardSection:(id)a1;

- (id)image;
- (id)command;
- (void)updateFields;
- (char)completionResultIsPotentiallyPunchout;
- (id)prefixMatchExtensionString;

@end
