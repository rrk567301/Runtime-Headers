@class NSString;

@interface _AMiCalDocument : SBObject

@property (copy) NSString *path;
@property (readonly) BOOL modified;
@property (copy) NSString *name;

- (BOOL)exists;
- (void)moveTo:(id)a0;
- (void)delete;
- (void)show;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)saveIn:(id)a0 as:(id)a1;

@end
