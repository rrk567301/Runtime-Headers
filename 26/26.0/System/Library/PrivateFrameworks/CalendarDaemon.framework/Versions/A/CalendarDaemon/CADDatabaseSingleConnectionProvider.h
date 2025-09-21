@class NSString, CADDatabaseInitializationOptions, NSMutableDictionary;
@protocol CADDatabaseConnectionProviderDelegate;

@interface CADDatabaseSingleConnectionProvider : NSObject <CalCalendarDatabaseIntegrityErrorReportingDelegate, CADDatabaseConnectionProvider> {
    CADDatabaseInitializationOptions *_initOptions;
    int _auxDatabaseSequence;
    NSMutableDictionary *_databases;
    id<CADDatabaseConnectionProviderDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeDatabases;
- (void)dealloc;
- (void)addDelegate:(id)a0;
- (void)_closeDatabases;
- (int)databaseRestoreGeneration;
- (void)removeDelegate:(id)a0;
- (BOOL)hasDatabaseAtPath:(id)a0 withDatabaseID:(int)a1;
- (void)reportIntegrityErrors:(id)a0;
- (void)addCreatedAuxDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)handleDatabaseChangedExternally;
- (id)_databases;
- (void)_prepareDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a0 withConfiguration:(id)a1;
- (void)performWithAllDatabasesWithConfiguration:(id)a0 priority:(unsigned long long)a1 block:(id /* block */)a2;
- (BOOL)performWithConfiguration:(id)a0 priority:(unsigned long long)a1 databaseID:(int)a2 block:(id /* block */)a3;
- (void)validateAuxDatabases;

@end
