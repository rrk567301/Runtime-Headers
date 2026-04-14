@class NSString, NSOperationQueue, NSLocale, NSObject, _PASLock;
@protocol OS_dispatch_semaphore;

@interface PPConnectionsPasteboardSource : PPConnectionsSource <PPConnectionsLocationSource> {
    unsigned long long _pasteboardNotificationState;
    _PASLock *_lock;
    id _pasteboardObserver;
    NSObject<OS_dispatch_semaphore> *_init_sem;
    NSOperationQueue *_pbQueue;
    NSLocale *_testLocale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)refreshMostRecentPasteboardItemFromNotification:(BOOL)a0 explanationSet:(id)a1;
- (id)_mostRecentPasteboardItem;
- (void)_setMostRecentPasteboardItem:(id)a0;
- (id)fetchedPasteboardItem;
- (id)locationItemsWithCriteria:(id)a0 earliest:(id)a1 latest:(id)a2 limit:(unsigned long long)a3 consumer:(unsigned long long)a4 explanationSet:(id)a5;
- (void)unsetPasteboardTextForTestingAndClearCache;
- (id)identifier;
- (id)addressPasteboardTextItemFromNotification:(BOOL)a0;
- (void)setTestLocale:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)supportedSemanticTags;
- (void)setPasteboardTextForTesting:(id)a0;
- (id)validUTTypes;
- (id)init;

@end
