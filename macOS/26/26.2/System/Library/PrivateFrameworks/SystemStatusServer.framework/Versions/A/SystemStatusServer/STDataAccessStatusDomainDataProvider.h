@class NSString, NSArray, STMediaStatusDomainData, NSMutableDictionary, NSObject, NSMutableArray, STDataAccessStatusDomainData, STDataAccessStatusDomainPublisher, STLocationStatusDomainData;
@protocol OS_dispatch_queue;

@interface STDataAccessStatusDomainDataProvider : NSObject <BSInvalidatable> {
    STLocationStatusDomainData *_locationData;
    STMediaStatusDomainData *_mediaData;
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_internalQueue;
    STDataAccessStatusDomainPublisher *_dataAccessPublisher;
    STDataAccessStatusDomainData *_currentData;
    NSArray *_activeAttributions;
    NSMutableArray *_attributionsWaitingForMinimumDisplayTime;
    NSMutableDictionary *_activeAttributionMinimumDisplayTimers;
    NSMutableArray *_recentAttributions;
    NSMutableDictionary *_recentAttributionExpirationTimers;
}

@property (readonly, copy, nonatomic) STDataAccessStatusDomainData *dataAccessData;
@property (readonly, copy, nonatomic) STLocationStatusDomainData *locationData;
@property (readonly, copy, nonatomic) STMediaStatusDomainData *mediaData;
@property (copy, nonatomic) id /* block */ dataChangedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)setLocationData:(id)a0 mediaData:(id)a1;

@end
