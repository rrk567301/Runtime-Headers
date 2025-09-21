@class NSXPCListener, NSArray, NSString, NSMutableSet, NSObject, NSLock;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CADServer : NSObject <NSXPCListenerDelegate, DatabaseChangeHandling, CalActivatable> {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _backgroundTaskCount;
    NSXPCListener *_NSXPCListener;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_dispatch_queue> *_tccQueue;
    NSMutableSet *_clientConnections;
    NSLock *_connectionLock;
    NSArray *_signalSensors;
    NSObject<OS_dispatch_queue> *_initDataFirstUnlockQueue;
    BOOL _initializationFinished;
}

@property (retain, nonatomic) NSArray *modules;
@property (nonatomic, getter=isActive) BOOL active;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *alarmQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_registerForAlarmEvents;
- (void)_protectedDataDidBecomeAvailable;
- (void)_dumpState;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_exit;
- (void)_deactivateAndExit;
- (unsigned long long)_lastKnownContactsAuthorization;
- (void)_registerContactsAccess;
- (void)_setUpSignalHandlers;
- (void)_trimExtendAndUpdateOccurrenceCache:(BOOL)a0;
- (void)cleanupDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a0;
- (void)_registerActivityWithIdentifier:(const char *)a0 block:(id /* block */)a1;
- (void)_registerForNotifications;
- (void)initiateReminderAuthenticationForAppProtectionForClientConnection:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (id)initWithModules:(id)a0;
- (void)initiateAuthenticationForAppProtectionForClientConnection:(id)a0 completion:(id /* block */)a1;
- (void)_migrateIfNeeded;
- (void)_clientConnectionDied:(id)a0;
- (void)_cleanupChangeTablesInDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a0;
- (id)init;
- (void)_registerForAnalyticsCollection;
- (void)_registerForConferenceURLRenewal;
- (void)_registerForChangeTableCleanup;
- (void)_startBirthdayListener;
- (void)_finishInitializationWithDataAvailable;
- (void)handlePostChangeNote:(id)a0 connection:(id)a1 processName:(id)a2;
- (void)_registerForAttachmentCleanup;
- (void)_registerForOccurrenceCacheUpdate;
- (void)_registerMaintenanceActivities;
- (void)deactivate;
- (void)_tearDownSignalHandlers;
- (void)_setupBirthdayListener;
- (void)_handleDatabaseChanged;
- (void)activate;
- (void)_handleXPCConnection:(id)a0;
- (void)_registerForDatabaseCleanup;
- (void)handleDistributeChangeReport:(id)a0;
- (void).cxx_destruct;

@end
