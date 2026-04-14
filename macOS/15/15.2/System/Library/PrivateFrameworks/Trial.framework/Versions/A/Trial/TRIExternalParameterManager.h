@class _PASLock, NSString, NSDate;
@protocol TRIExternalParameterProviding;

@interface TRIExternalParameterManager : NSObject {
    id<TRIExternalParameterProviding> _paramProvider;
    _PASLock *_lock;
    NSString *_plistPath;
}

@property (readonly, nonatomic) NSDate *siriDeviceAggregationIdRotationDate;

- (id)init;
- (void).cxx_destruct;
- (id)dictionary;
- (void)_fetchSiriDeviceAggregationIdRotationDate;
- (id)_readParametersFromFile;
- (id)_readSiriDeviceAggregationIdRotationDateFromEvent:(id)a0;
- (void)_updateSystemInfo;
- (void)_writeParametersToFile;
- (id)initWithProvider:(id)a0 paths:(id)a1;

@end
