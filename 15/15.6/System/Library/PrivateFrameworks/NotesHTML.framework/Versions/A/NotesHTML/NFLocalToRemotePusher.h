@interface NFLocalToRemotePusher : NSObject

+ (id)_exchangePusher;
+ (id)_imapPusher;
+ (id)_remotePusherForAccountProxy:(id)a0;
+ (id)_remotePusherForRemoteObject:(id)a0;
+ (char)addFolderToRemote:(id)a0 inParent:(id)a1 accountProxy:(id)a2 errorIsFatal:(char *)a3;
+ (char)addNoteToRemote:(id)a0 inFolder:(id)a1 accountProxy:(id)a2 errorIsFatal:(char *)a3;
+ (char)deleteFolderFromRemote:(id)a0 fromParent:(id)a1 accountProxy:(id)a2 errorIsFatal:(char *)a3;
+ (char)deleteNoteFromRemoteWithID:(id)a0 fromFolder:(id)a1 accountProxy:(id)a2 errorIsFatal:(char *)a3;
+ (char)moveFolderOnRemote:(id)a0 toParent:(id)a1 originalParent:(id)a2 accountProxy:(id)a3 errorIsFatal:(char *)a4;
+ (char)moveNoteOnRemote:(id)a0 toFolder:(id)a1 originalFolder:(id)a2 accountProxy:(id)a3 errorIsFatal:(char *)a4;
+ (char)updateFolderOnRemote:(id)a0 inParent:(id)a1 accountProxy:(id)a2 errorIsFatal:(char *)a3;
+ (char)updateNoteOnRemote:(id)a0 inFolder:(id)a1 accountProxy:(id)a2 errorIsFatal:(char *)a3;

@end
