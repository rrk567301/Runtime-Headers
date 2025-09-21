@class NSString, GEOReferenceTimeData, geo_isolater, NSObject;
@protocol OS_dispatch_semaphore;

@interface GEOReferenceTimeManager : NSObject <GEOConfigChangeListenerDelegate> {
    GEOReferenceTimeData *_refTimeData;
    geo_isolater *_iso;
    NSObject<OS_dispatch_semaphore> *_syncSem;
    char _synchronized;
    char _isGEOAPD;
    double _managerStartTime;
    unsigned int _attemptNum;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_startTimedSync;
- (char)_didKernBootTimeChange;
- (char)_initFromPersistenceAtTime:(double)a0;
- (id)_initInternal;
- (void)_kernBootTimeResult:(id /* block */)a0;
- (void)_persistBasisRefTimeData:(id)a0;
- (double)_referenceTime;
- (id)_retrievePersistedBasisRefTimeData;
- (void)_syncWithTimed;
- (char)_synchronized;
- (id)bestReferenceDate;
- (double)bestReferenceTime;
- (void)referenceTimeResult:(id /* block */)a0;
- (char)synchronized;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;

@end
