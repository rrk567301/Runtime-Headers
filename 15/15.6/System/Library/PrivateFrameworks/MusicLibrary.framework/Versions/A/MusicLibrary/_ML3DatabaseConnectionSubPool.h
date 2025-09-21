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
}

@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) unsigned long long maxConcurrentConnections;
@property (nonatomic) char useReadOnlyConnections;
@property (nonatomic) char useDistantConnections;
@property (nonatomic) unsigned long long connectionsJournalingMode;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)checkInConnection:(id)a0 returnToPool:(char)a1;
- (void)_handleDatabaseDeletion;
- (void)checkInConnection:(id)a0;
- (id)checkoutConnection:(char *)a0;
- (void)closeConnection:(id)a0;
- (void)closeConnectionsAndWaitForBusyConnections:(char)a0;
- (void)closeConnectionsForOwningPoolClosed:(char)a0 andWaitForBusyConnections:(char)a1;
- (void)handleDiagnostic:(id)a0;
- (char)hasBusyConnections;
- (id)initWithDatabasePath:(id)a0 maxConcurrentConnections:(unsigned long long)a1;
- (char)isBusyConnection:(id)a0;

@end
