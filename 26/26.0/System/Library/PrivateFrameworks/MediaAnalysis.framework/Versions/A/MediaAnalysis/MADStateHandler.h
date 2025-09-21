@class NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MADStateHandler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_breadcrumbs;
    unsigned long long _knownRiskState;
    NSDate *_timeoutRiskEntryTime;
}

+ (id)sharedStateHandler;

- (id)init;
- (void).cxx_destruct;
- (void)addBreadcrumb:(id)a0;
- (void)dumpBreadcrumps;
- (unsigned long long)currentTimeoutRiskAndStartTime:(id *)a0;
- (void)enterKnownTimeoutRisk:(unsigned long long)a0;
- (void)exitKnownTimeoutRisk;

@end
