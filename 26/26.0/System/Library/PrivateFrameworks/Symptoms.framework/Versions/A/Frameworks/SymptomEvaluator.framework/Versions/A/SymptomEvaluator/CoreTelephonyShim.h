@class NSMutableDictionary, NSMutableSet, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CoreTelephonyShim : NSObject {
    NSMutableSet *delegates;
    NSObject<OS_dispatch_queue> *elevatedQueue;
}

@property (readonly, nonatomic) NSMutableDictionary *subscriptions;
@property (readonly, nonatomic) struct __CTServerConnection { } *ctServerConnection;
@property (readonly, nonatomic) NSMutableDictionary *subscribers;
@property (readonly, nonatomic) NSNumber *currentSubscriberTag;

+ (id)sharedInstance;
+ (id)dateTimeStringFromCTDumpFolderPrefix:(id)a0;
+ (id)elevatedQueue;
+ (double)timestampFromCTDumpFolderPrefix:(id)a0;

- (id)initWithQueue:(id)a0;
- (void)commonInit;
- (void)dealloc;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (id)init;
- (void)_completeInitialization;
- (void).cxx_destruct;
- (void)_processEngineReadyNotification:(id)a0;
- (id)elevatedQueue;
- (BOOL)enableCoreTelephonyLoggingForCustomerSeed:(BOOL)a0;
- (BOOL)getBasebandTraceEnabledState:(BOOL *)a0 coreDumpEnabled:(BOOL *)a1;
- (void)registerForCTDumpNotifications;
- (void)unregisterForCTDumpNotifications;

@end
