@class NSSet, NSString, _NSQuickActionPresentation;

@interface _NSExtensionQuickActionProviderSource : NSObject <_NSQuickActionProviderSource> {
    _NSQuickActionPresentation *_presentation;
    id _observer;
    NSSet *_availableQuickActions;
    void *_observationInfo;
}

@property (readonly, copy) NSSet *quickActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversOfQuickActions;

- (void *)observationInfo;
- (void)setObservationInfo:(void *)a0;
- (void)dealloc;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPresentation:(id)a0;

@end
