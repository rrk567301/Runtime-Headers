@class NSString;

@interface _AMSystemEventsScriptingProperty : SBObject <_AMSystemEventsGenericMethods>

@property (readonly, copy) NSString *name;
@property (readonly) int access;
@property (readonly, copy) NSString *objectDescription;
@property (readonly) BOOL enumerated;
@property (readonly) BOOL hidden;
@property (readonly, copy) NSString *kind;
@property (readonly) BOOL listed;

- (id)id;
- (void)moveTo:(id)a0;
- (void)delete;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
