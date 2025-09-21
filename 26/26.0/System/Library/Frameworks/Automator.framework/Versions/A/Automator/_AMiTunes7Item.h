@class NSString, SBObject;

@interface _AMiTunes7Item : SBObject

@property (readonly, copy) SBObject *container;
@property (copy) NSString *name;
@property (readonly, copy) NSString *persistentID;

- (long long)id;
- (BOOL)exists;
- (void)open;
- (void)close;
- (void)delete;
- (id)duplicateTo:(id)a0;
- (void)playOnce:(BOOL)a0;
- (void)printPrintDialog:(BOOL)a0 withProperties:(id)a1 kind:(int)a2 theme:(id)a3;
- (void)reveal;

@end
