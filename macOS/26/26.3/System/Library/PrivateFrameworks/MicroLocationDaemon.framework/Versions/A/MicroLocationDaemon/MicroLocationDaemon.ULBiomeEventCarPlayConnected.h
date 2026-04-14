@class NSDate;

@interface MicroLocationDaemon.ULBiomeEventCarPlayConnected : MicroLocationDaemon.ULBiomeEvent {
    void /* unknown type, empty encoding */ timestamp;
}

@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) BOOL starting;
@property (nonatomic, readonly) int reason;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTimestamp:(id)a0 starting:(BOOL)a1 reason:(int)a2;

@end
