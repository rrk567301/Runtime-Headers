@class NSString, NSOperationQueue, NSLocale, NSObject, NSCache;
@protocol OS_dispatch_semaphore;

@interface PPConnectionsPasteboardSource : PPConnectionsSource <PPConnectionsLocationSource> {
    unsigned long long _pasteboardNotificationState;
    NSCache *_cache;
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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (id)locationItemsWithCriteria:(id)a0 earliest:(id)a1 latest:(id)a2 limit:(unsigned long long)a3 consumer:(unsigned long long)a4 explanationSet:(id)a5;
- (id)cacheValueForKey:(id)a0;
- (void)setCacheObject:(id)a0 forKey:(id)a1;
- (id)fetchedPasteboardItem;
- (id)_mostRecentPasteboardItem;
- (void)_setMostRecentPasteboardItem:(id)a0;
- (void)refreshMostRecentPasteboardItemFromNotification:(BOOL)a0 explanationSet:(id)a1;
- (id)addressPasteboardTextItemFromNotification:(BOOL)a0;
- (id)validUTTypes;
- (id)supportedSemanticTags;
- (void)setPasteboardTextForTesting:(id)a0;
- (void)unsetPasteboardTextForTestingAndClearCache;
- (void)setTestLocale:(id)a0;

@end
