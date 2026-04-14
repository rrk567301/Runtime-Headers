@class NSString, GCFrontmostApplicationObserver;

@interface _GCHIDEventDeliveryMonitor : NSObject <GCFrontmostApplicationObserverDelegate> {
    GCFrontmostApplicationObserver *_frontmostObserver;
    unsigned long long _state;
}

@property (readonly) int deferringTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
