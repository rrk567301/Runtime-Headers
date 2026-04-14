@class NSTimer, NSString, NSURL, NSArray, NSSet, NSOperationQueue, NSDictionary, NSMutableSet;

@interface _NSSavePanelTagSetter : NSObject <NSFilePresenter> {
    NSOperationQueue *queue;
    NSURL *_urlToTag;
    BOOL _useSecurityScopedURL;
    NSArray *tagNames;
    NSDictionary *initialFileAttributes;
    NSMutableSet *urlsWithTagsSet;
    NSTimer *timer;
}

@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_tagSetterFinished:(id)a0;
+ (id)_prefixForURL:(id)a0 nameFieldString:(id)a1;
+ (void)_waitForURL:(id)a0 useSecurityScopedURL:(BOOL)a1 withNameFieldString:(id)a2 thenSetTagNames:(id)a3;
+ (id)_relevantFileAttributesForURL:(id)a0 cached:(BOOL)a1;

- (void)dealloc;
- (void)presentedSubitemDidAppearAtURL:(id)a0;
- (void)presentedSubitemDidChangeAtURL:(id)a0;
- (void)_performFirstCheck;
- (void)_doneWatching;
- (id)_initWithTagNames:(id)a0;
- (id)_initWithURL:(id)a0 useSecurityScopedURL:(BOOL)a1 tagNames:(id)a2;
- (BOOL)_isRelevantURL:(id)a0;
- (id)_URLForDirectoryToWatch;
- (void)_enumerateURLsUsingBlock:(id /* block */)a0;
- (BOOL)_checkAndSetTagsForURL:(id)a0 usingAttributeCache:(BOOL)a1;
- (id)_snapshotOfFileSystemState;
- (void)_asynchronouslyWaitForURLToChangeThenSetTags;
- (void)_startWatching;
- (void)_scheduleStopWatching;
- (void)_stopWatching;
- (void)_setTagsForURL:(id)a0;

@end
