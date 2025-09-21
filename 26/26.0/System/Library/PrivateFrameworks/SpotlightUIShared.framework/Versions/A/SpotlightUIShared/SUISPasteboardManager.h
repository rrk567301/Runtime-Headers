@class NSMutableArray, NSPasteboard, BPSSink, BMBiomeScheduler, BMStream, BMDSL;

@interface SUISPasteboardManager : NSObject

@property (retain, nonatomic) BMStream *stream;
@property (retain, nonatomic) BMBiomeScheduler *scheduler;
@property (retain, nonatomic) BMDSL *publisher;
@property (retain, nonatomic) BPSSink *sink;
@property (nonatomic) long long changeCount;
@property (nonatomic) BOOL isNothingDispatchedForNextExpiration;
@property BOOL pasteboardHistoryItemWasCopied;
@property (retain, nonatomic) NSMutableArray *foundItems;
@property (retain, nonatomic) NSPasteboard *pasteboard;

+ (id)shared;
+ (id)collectExpiredItemsFromItems:(id)a0 expirationThresholdInSeconds:(double)a1 outputNextExpirationDate:(id *)a2;
+ (id)pasteboardExpirationManagerQueue;
+ (id)pasteboardFilter;

- (void)tearDown;
- (void)setup;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didUpdatePasteboard:(id)a0;
- (void)_updatePasteboardHistory;
- (void)deleteContinuityPasteboardItems;
- (void)_deleteExpiredItemsAndDispatchForNextExpiration:(BOOL)a0;
- (void)clearIndexAndCachedFiles;
- (void)configurePasteboardHistory;
- (void)deleteExpiredItemsAndDispatchForNextExpiration;
- (void)indexCoreSpotlightItemWithAttributeSet:(id)a0;
- (void)indexOrUpdateIfExistsCorespotlightItemAttributeSet:(id)a0;
- (BOOL)pasteboardDidChange:(id)a0;
- (void)registerPasteboardExpirationWatchdog;
- (void)updatePasteboardHistory;

@end
