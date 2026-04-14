@class NSDictionary;

@interface _AMTextEditItem : SBObject

@property (copy) NSDictionary *properties;

- (void)delete;
- (BOOL)exists;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)saveAs:(id)a0 in:(id)a1;

@end
