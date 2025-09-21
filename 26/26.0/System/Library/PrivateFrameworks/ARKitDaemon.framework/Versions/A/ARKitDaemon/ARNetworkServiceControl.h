@class NSString, NSArray, NSMutableDictionary;
@protocol ARDeviceCollection;

@interface ARNetworkServiceControl : NSObject <ARServiceEventListener> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_protocols;
    NSMutableDictionary *_servicesByProtocol;
}

@property (weak) id<ARDeviceCollection> deviceCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithProtocols:(id)a0;
- (void).cxx_destruct;
- (void)setTimebaseCorrection:(double)a0 sessionID:(id)a1;
- (void)didAddService:(id)a0 existingServices:(id)a1;
- (void)_tryAddService:(id)a0 forProtocol:(id)a1;
- (void)_tryRemoveService:(id)a0 forProtocol:(id)a1;
- (void)didRemoveService:(id)a0 existingServices:(id)a1;
- (id)servicesForProtocol:(id)a0;

@end
