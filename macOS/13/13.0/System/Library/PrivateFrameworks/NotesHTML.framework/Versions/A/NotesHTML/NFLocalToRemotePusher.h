@interface NFLocalToRemotePusher : NSObject

+ (BOOL)addNoteToRemote:(id)a0 inFolder:(id)a1 accountProxy:(id)a2 errorIsFatal:(BOOL *)a3;
+ (BOOL)updateNoteOnRemote:(id)a0 inFolder:(id)a1 accountProxy:(id)a2 errorIsFatal:(BOOL *)a3;
+ (BOOL)moveNoteOnRemote:(id)a0 toFolder:(id)a1 originalFolder:(id)a2 accountProxy:(id)a3 errorIsFatal:(BOOL *)a4;
+ (BOOL)deleteNoteFromRemoteWithID:(id)a0 fromFolder:(id)a1 accountProxy:(id)a2 errorIsFatal:(BOOL *)a3;
+ (BOOL)addFolderToRemote:(id)a0 inParent:(id)a1 accountProxy:(id)a2 errorIsFatal:(BOOL *)a3;
+ (BOOL)updateFolderOnRemote:(id)a0 inParent:(id)a1 accountProxy:(id)a2 errorIsFatal:(BOOL *)a3;
+ (BOOL)moveFolderOnRemote:(id)a0 toParent:(id)a1 originalParent:(id)a2 accountProxy:(id)a3 errorIsFatal:(BOOL *)a4;
+ (BOOL)deleteFolderFromRemote:(id)a0 fromParent:(id)a1 accountProxy:(id)a2 errorIsFatal:(BOOL *)a3;
+ (id)_remotePusherForRemoteObject:(id)a0;
+ (id)_remotePusherForAccountProxy:(id)a0;
+ (id)_imapPusher;
+ (id)_exchangePusher;

@end
