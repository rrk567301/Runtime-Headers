@class NSArray, NSMutableArray;

@interface SUOSUServiceClientManager : NSObject

@property (retain) NSMutableArray *clients;
@property (retain) NSMutableArray *sunmClients;
@property (readonly) NSArray *allClients;
@property (readonly) NSArray *notificationManagerClients;

- (id)clientForConnection:(id)a0;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)activeNotificationManagerClient;
- (BOOL)anyClientIsPreventingBackgroundScans;

@end
