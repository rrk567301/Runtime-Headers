@class NSUndoManager;

@interface _NSUndoManagerMainExportedObject : NSObject <_NSUndoManagerMainInterface> {
    NSUndoManager *_manager;
}

- (void).cxx_destruct;
- (void)_inProcessInvalidate:(id)a0;
- (id)_initWithUndoManager:(id)a0;
- (void)_registerRemoteUndoGroupForAction:(id)a0 auxUUID:(id)a1 withReply:(id /* block */)a2;

@end
