@class NSString, HDAssertionManager, NSObject;
@protocol OS_dispatch_queue;

@interface HDCarouselServicesManager : NSObject <HDAssertionObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (void)assertionManager:(id)a0 assertionTaken:(id)a1;
- (id)takeDisableAOTAssertionForOwnerIdentifier:(id)a0;
- (id)takeSessionAssertionForOwnerIdentifier:(id)a0;
- (id)takeSessionAssertionForOwnerIdentifier:(id)a0 supportsAOT:(char)a1;

@end
