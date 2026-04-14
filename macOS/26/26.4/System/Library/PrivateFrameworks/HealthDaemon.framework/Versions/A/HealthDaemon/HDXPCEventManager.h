@class HDXPCEventPublisher;

@interface HDXPCEventManager : NSObject {
    HDXPCEventPublisher *_authorizationPublisher;
}

- (void).cxx_destruct;
- (id)init;
- (void)authorizationChangedForBundleIdentifier:(id)a0;

@end
