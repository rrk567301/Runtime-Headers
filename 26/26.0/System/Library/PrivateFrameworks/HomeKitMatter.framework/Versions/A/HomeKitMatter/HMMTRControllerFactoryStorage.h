@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTRControllerFactoryStorage : NSObject <MTRStorage>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSMutableDictionary *mtrControllerFactoryKeyValueStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (id)init;
- (id)dictionaryCopy;
- (void).cxx_destruct;
- (BOOL)removeStorageDataForKey:(id)a0;
- (BOOL)setStorageData:(id)a0 forKey:(id)a1;
- (id)storageDataForKey:(id)a0;

@end
