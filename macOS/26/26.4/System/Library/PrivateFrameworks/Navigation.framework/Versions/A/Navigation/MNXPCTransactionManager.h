@class NSHashTable, geo_isolater, NSObject;
@protocol OS_os_transaction;

@interface MNXPCTransactionManager : NSObject {
    NSObject<OS_os_transaction> *_xpcTransaction;
    NSHashTable *_requesters;
    geo_isolater *_isolater;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)addHighMemoryThresholdRequest:(id)a0;
- (void)removeHighMemoryThresholdRequest:(id)a0 afterDelay:(double)a1;

@end
