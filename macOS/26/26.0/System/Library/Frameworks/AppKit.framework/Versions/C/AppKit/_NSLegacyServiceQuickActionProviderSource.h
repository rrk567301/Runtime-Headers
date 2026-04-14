@class NSString, NSSet, _NSQuickActionPresentation, NSServicesMonitor;

@interface _NSLegacyServiceQuickActionProviderSource : NSObject <NSServicesMonitorObserver, _NSQuickActionProviderSource> {
    _NSQuickActionPresentation *_presentation;
    NSServicesMonitor *_monitor;
    NSSet *_quickActions;
    void *_observationInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *quickActions;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)providerSourceWithPresentation:(id)a0;
+ (BOOL)automaticallyNotifiesObserversOfQuickActions;

- (void *)observationInfo;
- (void)setObservationInfo:(void *)a0;
- (void)dealloc;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPresentation:(id)a0;
- (void)servicesDidChange;

@end
