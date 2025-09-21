@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCRateSharingGroup : VCObject {
    NSMutableDictionary *_shareProfileDictionary;
    NSMutableDictionary *_rateSharingClientMap;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_rateSharingClientTargetBitrateDict;
    unsigned int _currentRateSharingClientID;
    double _lastProbingSequenceAllowedTime;
}

@property (readonly) BOOL isSharingGroupEmpty;
@property (readonly) struct tagVCMediaQueue { } *mediaQueue;
@property (readonly) unsigned int maxBitrate;

- (void)dealloc;
- (id)init;
- (int)createMediaQueueWithIdentifier:(id)a0;
- (unsigned int)calculateMaxTargetBitrate;
- (unsigned int)countRateControllersForInterfaceType:(id)a0;
- (BOOL)deregisterRateSharingClient:(id)a0;
- (void)handleMediaQueueSizeExceedThresholdWithQueueSize:(double)a0 mediaQueueStreamId:(unsigned int)a1 type:(int)a2;
- (id)initWithIdentifier:(id)a0 useMediaQueue:(BOOL)a1;
- (int)registerRateSharingClient:(id)a0 forInterfaceType:(unsigned int)a1;
- (void)setTargetBitrate:(unsigned int)a0 fromRateSharingClient:(id)a1;
- (void)setVCMediaQueuePeakBitrateAndMaxTargetBitrate:(unsigned int)a0;
- (void)updateShareProfileForInterfaceType:(id)a0;

@end
