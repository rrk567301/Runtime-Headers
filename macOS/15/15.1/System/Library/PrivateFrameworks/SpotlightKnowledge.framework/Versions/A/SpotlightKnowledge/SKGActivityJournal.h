@class NSString;

@interface SKGActivityJournal : NSObject

@property (nonatomic) struct fd_obj { } *fd;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL verbose;
@property (nonatomic) BOOL isInternalInstall;
@property (nonatomic) void *lastEventData;
@property (nonatomic) unsigned long long lastEventDataSize;
@property (nonatomic) int lastEventType;
@property (nonatomic) unsigned int repeatEventCount;
@property (retain, nonatomic) NSString *path;

+ (id)sharedJournal;
+ (void)SKGActivityJournalPlayback:(const char *)a0 block:(id /* block */)a1;
+ (void)_SKGActivityDump:(id)a0 dst:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addEventWithTime:(int)a0 data:(void *)a1 dataSize:(unsigned int)a2;
- (void)addEventForCSSearchableItems:(int)a0 items:(id)a1;
- (void)addEventForItem:(int)a0 bundleID:(id)a1 identifier:(id)a2;
- (void)addEventWithTime:(int)a0;
- (void)addPurgeJournalsEventForItemWithPath:(id)a0 size:(unsigned long long)a1;
- (void)addVerboseEventForItemWithString:(id)a0 identifier:(id)a1 str:(id)a2;
- (id)initWithParentPath:(id)a0 fileName:(id)a1 limit:(long long)a2;
- (void)writeEvent:(unsigned int)a0 data:(void *)a1 dataSize:(unsigned int)a2;
- (void)writeInit;

@end
