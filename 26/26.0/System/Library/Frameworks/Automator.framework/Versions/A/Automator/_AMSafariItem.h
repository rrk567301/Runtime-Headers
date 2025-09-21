@class NSDictionary;

@interface _AMSafariItem : SBObject

@property (copy) NSDictionary *properties;

- (BOOL)exists;
- (void)moveTo:(id)a0;
- (void)delete;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)saveAs:(id)a0 in:(id)a1;

@end
