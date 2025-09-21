@class NSRecursiveLock, NSArray, NSString, NSCondition, NSMutableDictionary, NSMutableArray;

@interface ICNFIMAPConnectionPool : NSObject {
    NSRecursiveLock *_connectionPoolLock;
    NSCondition *_availabilityCondition;
    NSMutableDictionary *_idleConnectionsByMailbox;
    NSMutableDictionary *_activeConnectionsByMailbox;
    NSMutableArray *_suspendedGateways;
}

@property unsigned long long maximumConnectionCount;
@property (readonly) unsigned long long connectionCount;
@property (readonly, copy) NSArray *connections;
@property (copy) NSString *defaultIdleMailboxName;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeInvalidConnections;
- (void)resetMaximumConnectionCount;
- (void)updateConnectionsShouldUseIdle:(id)a0;
- (id)_suspendGatewayOfConnection:(id)a0 mailbox:(id)a1 forMailbox:(id)a2 resumingGateway:(id)a3;
- (id)_anyConnectionFromDictionary:(id)a0 selectedOnly:(char)a1 mailbox:(id *)a2;
- (id)_checkOutNewGatewayWithConnection:(id)a0 forMailbox:(id)a1;
- (id)_closeAllConnectionsAndCompact:(char)a0 inDictionary:(id)a1;
- (char)_connectionIsContained:(id)a0 forMailbox:(id)a1 inDictionary:(id)a2;
- (id)_gatewayToCheckOutConnection:(id)a0 defaultGateway:(id)a1 mailboxName:(id)a2 newGateway:(char *)a3;
- (id)_keyForMailboxName:(id)a0;
- (void)_makeConnectionAvailable:(id)a0;
- (id)_newGatewayForConnection:(id)a0 mailboxName:(id)a1;
- (void)_removeAllConnectionsInDictionary:(id)a0;
- (char)_removeConnection:(id)a0 fromDictionary:(id)a1;
- (void)_removeDisconnectedConnection:(id)a0 shouldRecover:(id)a1;
- (void)_removeInvalidConnectionsInDictionary:(id)a0;
- (void)_removeSuspendedGateway:(id)a0;
- (void)_sealSuspendedGateways;
- (void)_setConnection:(id)a0 forMailbox:(id)a1 clear:(char)a2 inDictionary:(id)a3;
- (id)_suspendFirstIdleConnectionForMailbox:(id)a0 resumingGateway:(id)a1 totalSecondsWaited:(double *)a2 mightBeSuccessful:(char *)a3;
- (id)_suspendFirstIdleConnectionInIdleConnections:(id)a0 forMailbox:(id)a1 resumingGateway:(id)a2;
- (void)_suspendGateway:(id)a0 allowNetworking:(char)a1;
- (id)_suspendedGatewayForMailbox:(id)a0;
- (id)_suspendedGatewayWithWorkRequireSelected:(char)a0;
- (char)_validateAndCheckOutGateway:(id)a0 forMailbox:(id)a1 allowReconnect:(char)a2 newGateway:(char)a3;
- (char)checkInConnection:(id)a0 forGateway:(id)a1;
- (void)checkInNewConnection:(id)a0;
- (id)checkOutGatewayForExistingConnectionToMailbox:(id)a0;
- (id)checkOutGatewayForMailbox:(id)a0;
- (id)checkOutGatewayForMailbox:(id)a0 newConnection:(id)a1 highPriority:(char)a2 waitIndefinitely:(char)a3;
- (id)checkOutNewGatewayWithConnection:(id)a0;
- (void)closeAllConnectionsAndCompact:(char)a0;
- (void)mailboxWithServerName:(id)a0 wasRenamed:(id)a1;
- (void)sealGatewayShutIfNoChanceOfResuming:(id)a0;
- (char)suspendGateway:(id)a0 withOperation:(id)a1;
- (char)tryToResumeGateway:(id)a0;
- (char)yieldGateway:(id)a0;

@end
