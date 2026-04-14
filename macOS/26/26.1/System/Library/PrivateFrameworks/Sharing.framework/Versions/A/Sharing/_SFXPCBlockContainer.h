@interface _SFXPCBlockContainer : NSObject <_SFXPCBlockContainerProtocol> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ containerRegistry;
    void /* unknown type, empty encoding */ registeredAsyncBlocks;
    void /* unknown type, empty encoding */ registeredSyncBlocks;
    void /* unknown type, empty encoding */ asyncBlocksLock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)invoke:(id)a0 parametersData:(id)a1 parametersAsyncSequenceContainer:(id)a2 parametersBlocksContainer:(id)a3 sync:(BOOL)a4 completion:(id /* block */)a5;

@end
