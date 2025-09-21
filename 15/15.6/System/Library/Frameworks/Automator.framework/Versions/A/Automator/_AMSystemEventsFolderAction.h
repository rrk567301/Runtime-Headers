@class NSString;

@interface _AMSystemEventsFolderAction : SBObject <_AMSystemEventsGenericMethods>

@property char enabled;
@property (copy) NSString *name;
@property (readonly, copy) NSString *path;
@property (readonly, copy) NSString *volume;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)scripts;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)enableProcessNewChanges:(int)a0;
- (void)printWithProperties:(id)a0 printDialog:(char)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
