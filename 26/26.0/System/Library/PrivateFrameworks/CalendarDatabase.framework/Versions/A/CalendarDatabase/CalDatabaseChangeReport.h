@class CalEventOccurrenceCacheRange;

@interface CalDatabaseChangeReport : NSObject <NSSecureCoding> {
    struct { void *x0; int x1; BOOL x2; unsigned long long x3; struct __CFArray *x4; } *_records;
    int _recordCount;
    int _recordCapacity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL reset;
@property (readonly, nonatomic) CalEventOccurrenceCacheRange *range;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)enumerateImpactedEvents:(id /* block */)a0;
- (int)appendNewRecord;
- (void)preprocessAdds:(struct __CFArray { } *)a0 updates:(struct __CFArray { } *)a1 deletes:(struct __CFArray { } *)a2;
- (void)changesSavedInDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; id x34; id x35; char *x36; unsigned int x37; unsigned int x38; int x39; unsigned long long x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; } *)a0;
- (void)freeRecords;
- (id)initForReset;
- (id)initWithAdded:(struct __CFArray { } *)a0 updated:(struct __CFArray { } *)a1 deleted:(struct __CFArray { } *)a2;
- (void)markNeedsReset;
- (int)newOrExistingRecordIndexForEvent:(void *)a0 changeType:(unsigned long long)a1 uidToIndex:(struct __CFDictionary { } *)a2;
- (BOOL)processChangeOfRelatedRecord:(void *)a0 changeType:(unsigned long long)a1 flag:(unsigned long long)a2 ownerGetter:(void /* function */ *)a3 uidToIndex:(struct __CFDictionary { } *)a4;
- (void)processChanges:(struct __CFArray { } *)a0 ofType:(unsigned long long)a1;

@end
