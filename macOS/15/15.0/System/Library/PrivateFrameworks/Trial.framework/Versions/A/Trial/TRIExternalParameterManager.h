@class _PASLock, NSDate;
@protocol TRIExternalParameterProviding;

@interface TRIExternalParameterManager : NSObject {
    id<TRIExternalParameterProviding> _paramProvider;
    _PASLock *_lock;
}

@property (readonly, nonatomic) NSDate *siriDeviceAggregationIdRotationDate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (void)_fetchSiriDeviceAggregationIdRotationDate;
- (id)_readSiriDeviceAggregationIdRotationDateFromEvent:(id)a0;
- (void)_updateSystemInfo;

@end
