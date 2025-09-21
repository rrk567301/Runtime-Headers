@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _ML3DatabaseConnectionSubPool : NSObject {
    NSObject<OS_dispatch_queue> *_checkoutQueue;
    NSObject<OS_dispatch_queue> *_checkinQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_waitingSemaphore;
    NSMutableSet *_availableConnections;
    NSMutableSet *_busyConnections;
    int _willDeleteDatabaseNotifyToken;
    int _homeSharingCachesClearedNotifyToken;
    BOOL _isSubPoolClosed;
}

@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) unsigned long long maxConcurrentConnections;
@property (nonatomic) BOOL useReadOnlyConnections;
@property (nonatomic) BOOL useDistantConnections;
@property (nonatomic) unsigned long long connectionsJournalingMode;

- (void)dealloc;
- (BOOL)isBusyConnection:(id)a0;
- (id)checkoutConnection:(BOOL *)a0;
- (void)checkInConnection:(id)a0 returnToPool:(BOOL)a1;
- (id)init;
- (void)closeConnection:(id)a0;
- (id)description;
- (id)_checkoutConnection:(BOOL *)a0 ignoreSubPoolClosedState:(BOOL)a1;
- (void)handleDiagnostic:(id)a0;
- (id)initWithDatabasePath:(id)a0 maxConcurrentConnections:(unsigned long long)a1;
- (BOOL)hasBusyConnections;
- (void)closeConnectionsForOwningPoolClosed:(BOOL)a0 andWaitForBusyConnections:(BOOL)a1;
- (void)_handleDatabaseDeletion;
- (void)closeConnectionsAndWaitForBusyConnections:(BOOL)a0;
- (void)setSubPoolIsClosed;
- (void)checkInConnection:(id)a0;
- (void).cxx_destruct;

@end
