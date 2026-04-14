@interface _TtCC28GenerativeExperiencesRuntime28CoreFollowUpXPCServiceServer6Server : NSObject <GMCoreFollowUpXPCServiceProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearAllCFUsWith:(id /* block */)a0;
- (void)pendingCFUsWith:(id /* block */)a0;
- (void)postOutOfStorageCFUWithForce:(BOOL)a0 with:(id /* block */)a1;
- (void)runOutOfStorageCheckWithForce:(BOOL)a0 with:(id /* block */)a1;

@end
