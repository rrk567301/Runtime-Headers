@interface _TtCC28GenerativeExperiencesRuntime28CoreFollowUpXPCServiceServer6Server : NSObject <GMCoreFollowUpXPCServiceProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ manager;
}

- (void).cxx_destruct;
- (id)init;
- (void)clearAllCFUsWith:(id /* block */)a0;
- (void)pendingCFUsWith:(id /* block */)a0;
- (void)postAppleIntelligenceReadinessCFUWithForce:(BOOL)a0 with:(id /* block */)a1;
- (void)postAutoEnablementNotificationWithForce:(BOOL)a0 with:(id /* block */)a1;
- (void)postOutOfStorageCFUWithForce:(BOOL)a0 remainingSpaceRequired:(unsigned long long)a1 with:(id /* block */)a2;
- (void)removeAppleIntelligenceReadinessCFUWithForce:(BOOL)a0 with:(id /* block */)a1;
- (void)removeAutoEnablementNotificationWithForce:(BOOL)a0 with:(id /* block */)a1;
- (void)removeBuddyCFUWith:(id /* block */)a0;
- (void)runOutOfStorageCheckWithForce:(BOOL)a0 with:(id /* block */)a1;

@end
