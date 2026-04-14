@class AVQueuePlayerObservationRegistrar;

@interface AVQueuePlayerInternal : NSObject {
    AVQueuePlayerObservationRegistrar *observationRegistrar;
    BOOL isOverlapCurrentlyAllowed;
    struct OpaqueFigSimpleMutex { } *ivarMutex;
}

@end
