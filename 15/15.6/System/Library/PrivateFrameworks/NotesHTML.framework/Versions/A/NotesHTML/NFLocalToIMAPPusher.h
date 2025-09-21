@class NSString;

@interface NFLocalToIMAPPusher : NSObject <NFLocalToRemotePusherProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const char *)logCategory;

- (char)_deleteFolderHierarchyFromRemote:(id)a0 accountProxy:(id)a1;
- (char)_deleteNoteFromRemoteWithID:(id)a0 folder:(id)a1;
- (char)addFolderToRemote:(id)a0 inParent:(id)a1 accountProxy:(id)a2 errorIsFatal:(char *)a3;
- (char)addNoteToRemote:(id)a0 inFolder:(id)a1 accountProxy:(id)a2 errorIsFatal:(char *)a3;
- (char)deleteFolderFromRemote:(id)a0 fromParent:(id)a1 accountProxy:(id)a2 errorIsFatal:(char *)a3;
- (char)deleteNoteFromRemoteWithID:(id)a0 fromFolder:(id)a1 accountProxy:(id)a2 errorIsFatal:(char *)a3;
- (char)moveFolderOnRemote:(id)a0 toParent:(id)a1 originalParent:(id)a2 accountProxy:(id)a3 errorIsFatal:(char *)a4;
- (char)moveNoteOnRemote:(id)a0 toFolder:(id)a1 originalFolder:(id)a2 accountProxy:(id)a3 errorIsFatal:(char *)a4;
- (char)updateFolderOnRemote:(id)a0 inParent:(id)a1 accountProxy:(id)a2 errorIsFatal:(char *)a3;
- (char)updateNoteOnRemote:(id)a0 inFolder:(id)a1 accountProxy:(id)a2 errorIsFatal:(char *)a3;

@end
