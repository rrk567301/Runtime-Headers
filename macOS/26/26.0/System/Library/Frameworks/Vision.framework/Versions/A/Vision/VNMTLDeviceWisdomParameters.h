@class NSString, NSDictionary;

@interface VNMTLDeviceWisdomParameters : NSObject <VNMTLDeviceWisdomParametersProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedMetalDeviceWisdomParametersLock;
    NSDictionary *_cachedMetalDeviceWisdomParameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)wisdomParameterForMTLDeviceWithName:(id)a0 error:(id *)a1;
- (id)_loadMetalDeviceWisdomParametersAndReturnError:(id *)a0;
- (id)wisdomParameterForMTLDevice:(id)a0 error:(id *)a1;
- (id)init;
- (id)_wisdomResourcesPath;
- (void)flushMetalDeviceWisdomParametersCache;
- (id)_cachedMetalDeviceWisdomParametersAndReturnError:(id *)a0;
- (void).cxx_destruct;

@end
