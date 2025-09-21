@class NSSet, NSDictionary, ATXGenericFileBasedCache, NSObject, _PASLock;
@protocol OS_dispatch_queue;

@interface ATXPosterDescriptorCache : NSObject {
    ATXGenericFileBasedCache *_fileCache;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_outputQueue;
}

@property (readonly, copy, nonatomic) NSDictionary *descriptors;
@property (readonly, copy, nonatomic) NSSet *allDescriptors;

+ (id)sharedInstance;

- (id)initWithPath:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)updateDescriptors:(id)a0;
- (id)_readDescriptorsFromDisk;
- (void)registerObserver:(id)a0;
- (id)init;
- (void)_writeDescriptorsToDisk:(id)a0;
- (void).cxx_destruct;

@end
