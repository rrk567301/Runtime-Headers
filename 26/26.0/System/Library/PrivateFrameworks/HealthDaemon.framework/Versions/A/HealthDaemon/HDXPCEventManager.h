@class HDXPCEventPublisher;

@interface HDXPCEventManager : NSObject {
    HDXPCEventPublisher *_authorizationPublisher;
}

- (void)authorizationChangedForBundleIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
