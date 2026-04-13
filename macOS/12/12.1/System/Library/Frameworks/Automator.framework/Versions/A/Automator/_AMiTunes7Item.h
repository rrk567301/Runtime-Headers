@class NSString, SBObject;

@interface _AMiTunes7Item : SBObject

@property (readonly, copy) SBObject *container;
@property (copy) NSString *name;
@property (readonly, copy) NSString *persistentID;

- (void)open;
- (void)close;
- (void)delete;
- (BOOL)exists;
- (long long)id;
- (id)duplicateTo:(id)a0;
- (void)reveal;
- (void)printPrintDialog:(BOOL)a0 withProperties:(id)a1 kind:(int)a2 theme:(id)a3;
- (void)playOnce:(BOOL)a0;

@end
