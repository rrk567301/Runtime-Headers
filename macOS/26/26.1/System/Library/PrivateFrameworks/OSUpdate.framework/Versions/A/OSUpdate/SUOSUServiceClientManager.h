@class NSArray, NSMutableArray;

@interface SUOSUServiceClientManager : NSObject

@property (retain) NSMutableArray *clients;
@property (retain) NSMutableArray *sunmClients;
@property (readonly) NSArray *allClients;
@property (readonly) NSArray *notificationManagerClients;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void).cxx_destruct;
- (id)clientForConnection:(id)a0;
- (id)init;
- (id)activeNotificationManagerClient;
- (BOOL)anyClientIsPreventingBackgroundScans;

@end
