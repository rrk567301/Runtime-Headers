@class NSProgress, CSKStreamObserver, CSKStreamDataBatch;

@interface CSKStreamObserverTask : CSKStreamTask

@property (retain) NSProgress *progress;
@property (readonly, weak, nonatomic) CSKStreamObserver *observer;
@property (readonly, copy, nonatomic) CSKStreamDataBatch *dataBatch;
@property (nonatomic) BOOL skipsFiltering;
@property (nonatomic) BOOL findsAnchorClosestIndex;

+ (id)name;

- (id)init;
- (void).cxx_destruct;
- (id /* block */)handler;
- (void)notifyObserverForObserverDataBatch:(id)a0;
- (id)initWithObserver:(id)a0 dataBatch:(id)a1;
- (void)notifyObserverOfFilteringDidStart;
- (void)notifyObserverOfFilteringDidFinish;
- (long long)_searchEntityIndexCloseToIdentifier:(long long)a0 inEntities:(id)a1 indexIsIdentifier:(BOOL *)a2;

@end
