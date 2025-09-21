@class AVDepthData;

@interface AVCaptureSynchronizedDepthDataInternal : NSObject {
    AVDepthData *depthData;
    char depthDataWasDropped;
    long long droppedReason;
}

@end
