@class NSString, NSArray, FPItemCollection, NSError;

@interface DSFPItemCollectionObserver : NSObject <FPItemCollectionItemIDBasedDelegate> {
    struct TNodePtr { struct TNode *fCountedNode; } fParentNode;
    struct TNSRef<FPItemCollection, void> { FPItemCollection *fRef; } _collection;
    struct TNSRef<NSArray<FPItem *>, void> { NSArray *fRef; } _FPItems;
    struct TNSRef<NSError, void> { NSError *fRef; } _FPError;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    struct TConditionVariable { struct condition_variable_any { struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __cv_; struct shared_ptr<std::mutex> { struct mutex *__ptr_; struct __shared_weak_count *__cntrl_; } __mut_; } fCondition; int fWaitCount; } _cv;
    int _useCount;
    BOOL populated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopObserving;
- (void)startObserving:(id)a0 withQueue:(id)a1;
- (void)incrementUseCount;
- (int)decrementUseCount;
- (BOOL)populated;
- (void)blockUntilPopulated;
- (void)collectionSynched;
- (struct TNSRef<NSArray<FPItem *>, void> { id x0; })fpItems;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (void)collection:(id)a0 didEncounterError:(id)a1;
- (void)collection:(id)a0 didUpdateObservedItem:(id)a1;
- (void)collectionDidFinishGathering:(id)a0;
- (void)collection:(id)a0 didUpdateItems:(id)a1 replaceItemsByFormerID:(id)a2 deleteItemsWithIDs:(id)a3;
- (struct TNSRef<NSError, void> { id x0; })fpError;
- (void)setFPItems:(id)a0;

@end
