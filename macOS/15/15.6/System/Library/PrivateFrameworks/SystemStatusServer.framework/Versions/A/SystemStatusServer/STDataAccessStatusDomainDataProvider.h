@class NSString, NSArray, STLocationStatusDomain, NSMutableDictionary, NSObject, NSMutableArray, STDataAccessStatusDomainData, STDataAccessStatusDomainPublisher, STMediaStatusDomain;
@protocol OS_dispatch_queue;

@interface STDataAccessStatusDomainDataProvider : NSObject <BSInvalidatable> {
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_internalQueue;
    STLocationStatusDomain *_locationDomain;
    STMediaStatusDomain *_mediaDomain;
    STDataAccessStatusDomainPublisher *_dataAccessPublisher;
    STDataAccessStatusDomainData *_currentData;
    NSArray *_activeAttributions;
    NSMutableArray *_attributionsWaitingForMinimumDisplayTime;
    NSMutableDictionary *_activeAttributionMinimumDisplayTimers;
    NSMutableArray *_recentAttributions;
    NSMutableDictionary *_recentAttributionExpirationTimers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
