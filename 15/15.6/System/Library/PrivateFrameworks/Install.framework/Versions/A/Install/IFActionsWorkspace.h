@interface IFActionsWorkspace : NSObject

+ (id)nameForProcess:(int)a0;
+ (id)actionsDock;
+ (id)actionsWorkspace;

- (char)openURL:(id)a0;
- (char)openFile:(id)a0;
- (id)loginItems;
- (char)removeLoginItem:(id)a0;
- (char)addLoginItem:(id)a0 atIndex:(id)a1 hidden:(id)a2;
- (char)createAliasFrom:(id)a0 atLocation:(id)a1 withName:(id)a2;
- (char)killPID:(id)a0 withSignal:(id)a1;
- (int)loadKext:(id)a0 queueElement:(id)a1;
- (id)loginItemRefs;
- (int)quitPID:(id)a0;
- (char)showFile:(id)a0;
- (int)unloadKext:(id)a0 queueElement:(id)a1;
- (char)writeCookie:(id)a0 withContents:(id)a1;

@end
