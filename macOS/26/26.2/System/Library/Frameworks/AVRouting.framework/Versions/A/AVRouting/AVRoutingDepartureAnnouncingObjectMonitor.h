@class AVRoutingWeakReference;

@interface AVRoutingDepartureAnnouncingObjectMonitor : NSObject {
    AVRoutingWeakReference *_weakReferenceToMonitoringObject;
}

+ (void)attachDepartureAnnouncingObjectMonitorToObject:(id)a0 monitoringObject:(id)a1;

- (void)dealloc;
- (id)initWithMonitoringObject:(id)a0;

@end
