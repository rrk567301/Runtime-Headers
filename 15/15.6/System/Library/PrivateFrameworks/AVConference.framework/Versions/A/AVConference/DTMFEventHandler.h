@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface DTMFEventHandler : NSObject {
    NSObject<OS_dispatch_queue> *dtmfQueue;
    NSMutableArray *dtmfEventQueue;
    int _currentEventState;
    char currentEventNeedsEndBlock;
    unsigned long long currentEventRetransmitFinalPacketCount;
    unsigned char currentEvent;
    unsigned char currentVolume;
    unsigned int currentStartTimestamp;
    unsigned int currentDurationCounter;
    unsigned int currentEndTimestamp;
    unsigned int _currentPauseCompleteTimestamp;
    unsigned int _rtpEventDuration;
    unsigned int _adjustTimestamp;
}

- (void)dealloc;
- (id)init;
- (int)constructDTMFEventPacketWithEvent:(unsigned char)a0 volume:(unsigned char)a1 durationCounter:(unsigned int)a2 dataBuffer:(char *)a3 isEnd:(char)a4;
- (char)insertStartBlockWithEvent:(unsigned char)a0 volume:(unsigned char)a1 timestamp:(unsigned int)a2;
- (char)insertStopBlockWithEndTimestamp:(unsigned int)a0 withPauseCompleteTimestamp:(unsigned int)a1;
- (void)sendDTMFEvent:(id)a0 atTimestamp:(unsigned int)a1 withSampleRate:(unsigned int)a2;
- (void)sendingDTMFEventWithTimeStamp:(unsigned int)a0 interval:(unsigned int)a1 RTPHandle:(struct tagHANDLE { int x0; } *)a2;
- (void)setDTMFRTPEventDurationForPayload:(int)a0;
- (char)shouldAdjustForLastPauseCompleteTimestamp:(unsigned int *)a0;
- (char)shouldTransmitDTMFWithTimestamp:(unsigned int)a0;
- (void)stopDTMFEventAtTimestamp:(unsigned int)a0 withSampleRate:(unsigned int)a1;

@end
