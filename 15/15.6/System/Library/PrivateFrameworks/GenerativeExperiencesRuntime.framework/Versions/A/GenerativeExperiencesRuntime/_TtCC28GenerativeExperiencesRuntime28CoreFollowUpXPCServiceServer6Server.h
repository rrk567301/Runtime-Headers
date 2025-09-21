@interface _TtCC28GenerativeExperiencesRuntime28CoreFollowUpXPCServiceServer6Server : NSObject <GMCoreFollowUpXPCServiceProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ manager;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearAllCFUsWith:(id /* block */)a0;
- (void)pendingCFUsWith:(id /* block */)a0;
- (void)postAppleIntelligenceReadinessCFUWithForce:(char)a0 with:(id /* block */)a1;
- (void)postAutoEnablementNotificationWithForce:(char)a0 with:(id /* block */)a1;
- (void)postOutOfStorageCFUWithForce:(char)a0 remainingSpaceRequired:(unsigned long long)a1 with:(id /* block */)a2;
- (void)removeAppleIntelligenceReadinessCFUWithForce:(char)a0 with:(id /* block */)a1;
- (void)removeAutoEnablementNotificationWithForce:(char)a0 with:(id /* block */)a1;
- (void)runOutOfStorageCheckWithForce:(char)a0 with:(id /* block */)a1;

@end
