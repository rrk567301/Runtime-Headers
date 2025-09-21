@class NSArray, WiFiP2PAWDLStateMonitor;

@interface VCWiFiChannelSequenceMonitor : NSObject

@property long long state;
@property (retain) WiFiP2PAWDLStateMonitor *awdlStateMonitor;
@property (retain) NSArray *currentChannelSequence;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateLock;

- (void)dealloc;
- (void)invalidate;
- (id)init;
- (int)activate;
- (int)copyAWDLChannelSequence:(id *)a0 twoPtFourGHzChannelCount:(int *)a1 fiveGHzChannelCount:(int *)a2 dfsChannelCount:(int *)a3 inactiveSlotCount:(int *)a4;
- (void)processNewChannelSequence:(id)a0;

@end
