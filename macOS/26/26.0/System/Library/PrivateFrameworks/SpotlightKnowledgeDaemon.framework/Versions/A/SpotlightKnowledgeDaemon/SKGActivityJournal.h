@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SKGActivityJournal : NSObject

@property (nonatomic) struct fd_obj { } *fd;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isInternalInstall;
@property (retain, nonatomic) NSString *path;

+ (id)sharedJournal;
+ (id)testJournal;

- (void)dealloc;
- (void)flushUpdates;
- (void).cxx_destruct;
- (void)logInit;
- (BOOL)_addEventWithTypeOffQueue:(unsigned char)a0 params:(id)a1;
- (id)_createEventData:(unsigned char)a0 params:(id)a1;
- (void)addEvent:(unsigned char)a0 bundleID:(id)a1 identifiers:(id)a2;
- (void)addEventForCSSearchableItems:(unsigned char)a0 items:(id)a1;
- (void)addEventForItem:(unsigned char)a0 bundleID:(id)a1 identifier:(id)a2;
- (BOOL)addEventWithType:(unsigned char)a0 params:(id)a1;
- (void)clearJournalWithSize:(long long)a0 limit:(long long)a1;
- (id)initWithParentPath:(id)a0 fileName:(id)a1;

@end
