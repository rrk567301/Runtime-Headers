@class NSNumber, NSString, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface _GEOLocationShifterRemoteProxy : NSObject <_GEOLocationShifterProxy> {
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_shiftingEnabled;
    NSNumber *_shiftingFxnVersion;
    NSCache *_shiftFunctionCache;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSCache *memoryCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isLocationShiftRequiredForCoordinateInProcess:(struct { double x0; double x1; })a0;
- (void)shiftLatLng:(id)a0 auditToken:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isLocationShiftRequiredForRegion:(id)a0;
- (void)fetchRawShiftFunctionResponseForRequest:(id)a0 auditToken:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)pruneDiskCache;
- (unsigned int)locationShiftFunctionVersion;
- (BOOL)_isLocationShiftRequiredForCoordinateViaProxy:(struct { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)flushDiskCache;
- (BOOL)_isLocationShiftRequiredForRegionInProcess:(id)a0;
- (BOOL)_isLocationShiftRequiredForRegionViaProxy:(id)a0;
- (id)init;
- (void)getAllShiftEntries:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (BOOL)isLocationShiftEnabled;
- (BOOL)isLocationShiftRequiredForCoordinate:(struct { double x0; double x1; })a0;
- (void)fetchCachedShiftFunctionResponseForLocation:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;

@end
