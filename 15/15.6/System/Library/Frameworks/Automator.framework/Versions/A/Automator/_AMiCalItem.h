@class NSDictionary;

@interface _AMiCalItem : SBObject

@property (copy) NSDictionary *properties;

- (void)show;
- (void)delete;
- (void)moveTo:(id)a0;
- (char)exists;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)saveIn:(id)a0 as:(id)a1;

@end
