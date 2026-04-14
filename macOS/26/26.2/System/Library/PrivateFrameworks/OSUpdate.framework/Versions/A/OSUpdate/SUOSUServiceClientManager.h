@class NSArray, NSMutableArray;

@interface SUOSUServiceClientManager : NSObject

@property (retain) NSMutableArray *clients;
@property (retain) NSMutableArray *sunmClients;
@property (readonly) NSArray *allClients;
@property (readonly) NSArray *notificationManagerClients;

- (void)removeClient:(id)a0;
- (void)addClient:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)clientForConnection:(id)a0;
- (id)activeNotificationManagerClient;
- (BOOL)anyClientIsPreventingBackgroundScans;

@end
