@class CUTDeferredTaskQueue, IDSServerBagConfig, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface IDSServerBagCacheLoader : NSObject

@property (retain, nonatomic) IDSServerBagConfig *config;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL postingNotification;
@property (retain, nonatomic) CUTDeferredTaskQueue *handleExternalLoadTaskQueue;
@property (nonatomic) BOOL loadedNotification;
@property (retain, nonatomic) NSObject<OS_os_transaction> *bagReloadTransaction;
@property (copy, nonatomic) id /* block */ cacheDidReloadBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)clearOverrideValues;
- (id)initWithConfig:(id)a0 queue:(id)a1;
- (id)loadFromCacheWithError:(id *)a0;
- (id)loadOverrideValuesIfPresent;
- (id)writeOverrideValues:(id)a0;
- (id)writeRawContents:(id)a0;

@end
