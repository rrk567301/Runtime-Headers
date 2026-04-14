@class NSArray, NSObject;
@protocol RMConfigurationSubscriberEventStreamDelegate;

@interface RMConfigurationSubscriberEventStream : RMConfigurationSubscriberClient {
    NSObject *_delegationLock;
}

@property (retain, nonatomic) id eventStreamObserver;
@property (readonly, nonatomic) NSArray *configurationTypes;
@property (weak, nonatomic) id<RMConfigurationSubscriberEventStreamDelegate> delegate;

+ (id)_eventDescriptorByNameForEventStreamNamed:(id)a0;
+ (id)configuredConfigurationTypes;
+ (void)_setupEventHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)_handleEvent:(id)a0;
- (void)_setupEventHandler;
- (void)_fetchConfigurationsAndNotifyDelegateIfNeeded:(id)a0;
- (void)_delegateDidFailToFetchConfigurationsWithTypes:(id)a0 error:(id)a1;
- (void)_delegateDidFetchConfigurationsByType:(id)a0;

@end
