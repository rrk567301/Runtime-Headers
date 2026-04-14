@class NSString, GEOReferenceTimeData, geo_isolater, NSObject;
@protocol OS_dispatch_semaphore;

@interface GEOReferenceTimeManager : NSObject <GEOConfigChangeListenerDelegate> {
    GEOReferenceTimeData *_refTimeData;
    geo_isolater *_iso;
    NSObject<OS_dispatch_semaphore> *_syncSem;
    BOOL _synchronized;
    BOOL _IsGeod;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_initInternal;
- (BOOL)_initFromPersistence;
- (void)_startTimedSync;
- (void)_kernBootTimeResult:(id /* block */)a0;
- (id)_retrievePersistedBasisRefTimeData;
- (BOOL)_didKernBootTimeChange;
- (void)_syncWithTimed;
- (void)_persistBasisRefTimeData:(id)a0;
- (double)_referenceTime;
- (void)referenceTimeResult:(id /* block */)a0;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (double)bestReferenceTime;
- (BOOL)synchronized;

@end
