@class NSMutableSet, NSObject;
@protocol OS_tcc_server, OS_tcc_message_options, OS_dispatch_queue;

@interface TCCSystemTCC : NSObject

@property (readonly, nonatomic) NSObject<OS_tcc_server> *tccServer;
@property (readonly, nonatomic) NSObject<OS_tcc_message_options> *tccMessageOptions;
@property (readonly, nonatomic) unsigned long long dbType;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *accessibility;
@property (retain, nonatomic) NSMutableSet *developerTools;
@property (retain, nonatomic) NSMutableSet *listenEvent;
@property (retain, nonatomic) NSMutableSet *postEvent;
@property (retain, nonatomic) NSMutableSet *fullDiskAccess;
@property (retain, nonatomic) NSMutableSet *screenSharing;
@property (retain, nonatomic) NSMutableSet *screenRecording;
@property (readonly) BOOL hasClientsUsingAccessibilty;
@property (readonly) BOOL hasClientsUsingDeveloperTools;
@property (readonly) BOOL hasClientsUsingListenEvent;
@property (readonly) BOOL hasClientsUsingPostEvent;
@property (readonly) BOOL hasClientsUsingFullDiskAccess;
@property (readonly) BOOL hasClientsUsingScreenSharing;
@property (readonly) BOOL hasClientsUsingScreenRecording;

- (id)initWithDatabase:(unsigned long long)a0;
- (void)setup;
- (void).cxx_destruct;
- (void)addAuthorization:(id)a0;
- (BOOL)isAccessingMainDatabase;
- (BOOL)isAccessingMigratedDatabase;

@end
