@class NSObject;
@protocol OS_dispatch_queue;

@interface AVInputContextDestinationChangeInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    long long status;
}

@end
