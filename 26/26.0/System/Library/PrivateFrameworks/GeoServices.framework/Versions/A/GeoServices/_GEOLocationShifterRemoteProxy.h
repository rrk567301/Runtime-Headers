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

- (BOOL)_isLocationShiftRequiredForCoordinateViaProxy:(struct { double x0; double x1; })a0;
- (unsigned int)locationShiftFunctionVersion;
- (void)pruneDiskCache;
- (BOOL)_isLocationShiftRequiredForRegionViaProxy:(id)a0;
- (id)init;
- (void)shiftLatLng:(id)a0 auditToken:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAllShiftEntries:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (BOOL)_isLocationShiftRequiredForRegionInProcess:(id)a0;
- (BOOL)isLocationShiftRequiredForCoordinate:(struct { double x0; double x1; })a0;
- (BOOL)isLocationShiftEnabled;
- (void)fetchRawShiftFunctionResponseForRequest:(id)a0 auditToken:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)isLocationShiftRequiredForRegion:(id)a0;
- (void)fetchCachedShiftFunctionResponseForLocation:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)flushDiskCache;
- (void).cxx_destruct;
- (BOOL)_isLocationShiftRequiredForCoordinateInProcess:(struct { double x0; double x1; })a0;

@end
