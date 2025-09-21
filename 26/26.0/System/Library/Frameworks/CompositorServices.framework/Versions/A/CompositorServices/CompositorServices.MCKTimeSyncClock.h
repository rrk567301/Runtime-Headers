@interface CompositorServices.MCKTimeSyncClock : NSObject <TSClockClient> {
    void /* unknown type, empty encoding */ gPTPClock;
    void /* unknown type, empty encoding */ lastTimeSyncOffset;
    void /* unknown type, empty encoding */ invalidSyncOffsetTimeStamp;
    void /* unknown type, empty encoding */ synchedRemoteClockID;
    void /* unknown type, empty encoding */ _clockState;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didChangeLockStateTo:(int)a0 forClock:(id)a1;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;

@end
