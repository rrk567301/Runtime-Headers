@class NSObject, NSDate, VCPTimer, NSMutableArray;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface VCPMADResourceManager : NSObject {
    double _budget;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_resources;
    VCPTimer *_timer;
    NSDate *_lastActivation;
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)activateResource:(id)a0;
- (void)deactivateResource:(id)a0;
- (void)_purgeAllResources;
- (void)_setBudget:(double)a0;
- (void)checkTimeout;
- (id)entryForResource:(id)a0;
- (void)_reserveBudget:(double)a0;
- (double)currentBudget;
- (void)reserveBudget:(double)a0;
- (void)purgeAllResources;

@end
