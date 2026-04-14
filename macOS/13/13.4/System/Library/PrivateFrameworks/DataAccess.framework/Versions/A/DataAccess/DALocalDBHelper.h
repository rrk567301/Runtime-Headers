@class CNContactStore, NSString, DACalDBHelper, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface DALocalDBHelper : NSObject {
    NSObject<OS_dispatch_queue> *_calDBQueue;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) DACalDBHelper *calDBHelper;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) id /* block */ calUnitTestCallbackBlock;

+ (id)sharedInstanceForAccountType:(id)a0 creatingClass:(Class)a1;
+ (id)calContainerProvider;
+ (id)calMainDatabasePath;
+ (void)calSetMainDatabasePath:(id)a0 containerProvider:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)calCloseDatabaseForAccountID:(id)a0 save:(BOOL)a1;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)calDatabaseForAccountID:(id)a0;
- (void)calOpenDatabaseForAccountID:(id)a0 clientID:(id)a1;
- (BOOL)calSaveDatabaseAndFlushCachesForAccountID:(id)a0;
- (BOOL)calSaveDatabaseForAccountID:(id)a0;
- (BOOL)calCloseDatabaseForAuxDatabaseRef:(void *)a0 save:(BOOL)a1;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; struct __CFDictionary *x5; struct __CFDictionary *x6; struct os_unfair_lock_s { unsigned int x0; } x7; unsigned int x8; unsigned int x9; struct __CFArray *x10; struct __CFString *x11; struct __CFArray *x12; int x13; int x14; struct __CFString *x15; struct __CFURL *x16; struct __CFString *x17; struct __CFString *x18; unsigned long long x19; int x20; int x21; int x22; id /* block */ x23; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x24; BOOL x25; struct __CFArray *x26; struct __CFArray *x27; struct __CFArray *x28; struct __CFArray *x29; id x30; BOOL x31; BOOL x32; struct __CFSet *x33; id x34; id x35; id x36; int x37; id x38; id x39; id x40; char *x41; unsigned int x42; unsigned int x43; int x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; BOOL x50; } *)calDatabaseForAuxDatabaseRef:(void *)a0;
- (void)calOpenDatabaseAsGenericClientForAccountID:(id)a0;
- (void)calOpenDatabaseAsGenericClientForAuxDatabaseRef:(void *)a0;
- (id)abChangeTrackingID;
- (void)calOpenDatabaseForAuxDatabaseRef:(void *)a0 clientID:(id)a1;
- (BOOL)calSaveDatabaseForAuxDatabaseRef:(void *)a0;
- (id)initWithContactsFamilyDelegateAltDSID:(id)a0 familyDelegateACAccountID:(id)a1;

@end
