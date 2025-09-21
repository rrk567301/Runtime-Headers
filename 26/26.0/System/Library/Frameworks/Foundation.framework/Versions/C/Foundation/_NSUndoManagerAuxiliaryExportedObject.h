@class NSUUID, NSUndoManager;

@interface _NSUndoManagerAuxiliaryExportedObject : NSObject <_NSUndoManagerAuxiliaryInterface> {
    NSUndoManager *_manager;
    NSUUID *_uuid;
}

@property (readonly, retain) NSUUID *_auxUUID;

- (void).cxx_destruct;
- (void)_connectForUUID:(id)a0 clearStacks:(BOOL)a1 lastActionDate:(id)a2 withReply:(id /* block */)a3;
- (id)_inProcessConnectForUUID:(id)a0 mainInterface:(id)a1 clearStacks:(BOOL)a2 lastActionDate:(id)a3;
- (void)_inProcessInvalidate;
- (id)_initWithUndoManager:(id)a0;
- (id)_manager;
- (void)_performRemoteUndoForUUID:(id)a0 isRedo:(BOOL)a1 withReply:(id /* block */)a2;
- (void)_removeAllActionsWithReply:(id /* block */)a0;

@end
