@interface IFActionsWorkspace : NSObject

+ (id)actionsWorkspace;
+ (id)actionsDock;
+ (id)nameForProcess:(int)a0;

- (BOOL)openURL:(id)a0;
- (BOOL)openFile:(id)a0;
- (id)loginItems;
- (BOOL)removeLoginItem:(id)a0;
- (id)loginItemRefs;
- (BOOL)showFile:(id)a0;
- (BOOL)killPID:(id)a0 withSignal:(id)a1;
- (int)quitPID:(id)a0;
- (BOOL)createAliasFrom:(id)a0 atLocation:(id)a1 withName:(id)a2;
- (BOOL)writeCookie:(id)a0 withContents:(id)a1;
- (BOOL)addLoginItem:(id)a0 atIndex:(id)a1 hidden:(id)a2;
- (int)loadKext:(id)a0 queueElement:(id)a1;
- (int)unloadKext:(id)a0 queueElement:(id)a1;

@end
