@class NSObject;
@protocol OS_dispatch_queue, AVInputContextImpl;

@interface AVInputContextInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id<AVInputContextImpl> impl;
    unsigned long long inputDeviceFeatures;
    int applicationPID;
    BOOL applicationPIDWasSet;
}

@end
