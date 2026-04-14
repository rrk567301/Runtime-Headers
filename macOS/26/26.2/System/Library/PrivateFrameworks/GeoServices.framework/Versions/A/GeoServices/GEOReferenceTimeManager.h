@class NSString, GEOReferenceTimeData, geo_isolater, NSObject;
@protocol OS_dispatch_semaphore;

@interface GEOReferenceTimeManager : NSObject <GEOConfigChangeListenerDelegate> {
    GEOReferenceTimeData *_refTimeData;
    geo_isolater *_iso;
    NSObject<OS_dispatch_semaphore> *_syncSem;
    BOOL _synchronized;
    BOOL _isGEOAPD;
    double _managerStartTime;
    unsigned int _attemptNum;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)_kernBootTimeResult:(id /* block */)a0;
- (double)bestReferenceTime;
- (void)_syncWithTimed;
- (double)_referenceTime;
- (void)referenceTimeResult:(id /* block */)a0;
- (void).cxx_destruct;
- (id)bestReferenceDate;
- (id)_retrievePersistedBasisRefTimeData;
- (BOOL)_initFromPersistenceAtTime:(double)a0;
- (void)_startTimedSync;
- (BOOL)_didKernBootTimeChange;
- (void)_persistBasisRefTimeData:(id)a0;
- (BOOL)synchronized;
- (BOOL)_synchronized;
- (id)_initInternal;
- (void)dealloc;

@end
