@interface _AMiCalColor : SBObject

- (void)show;
- (void)delete;
- (BOOL)exists;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)moveTo:(id)a0;
- (void)saveIn:(id)a0 as:(id)a1;

@end
