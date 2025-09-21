@interface ATXMenuItemRegexFilter : ATXRegexFilter

+ (id)sharedInstance;
+ (id)joinComponentsOfMenuItemPath:(id)a0;

- (id)init;
- (BOOL)shouldFilterOutAction:(id)a0;

@end
