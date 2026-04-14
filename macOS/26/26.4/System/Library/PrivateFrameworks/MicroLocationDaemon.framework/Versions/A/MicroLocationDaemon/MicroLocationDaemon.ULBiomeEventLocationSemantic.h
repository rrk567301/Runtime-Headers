@class NSUUID, NSDate;

@interface MicroLocationDaemon.ULBiomeEventLocationSemantic : MicroLocationDaemon.ULBiomeEvent {
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ loiIdentifier;
}

@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) BOOL starting;
@property (nonatomic, readonly) int locationType;
@property (nonatomic, readonly) NSUUID *loiIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTimestamp:(id)a0 starting:(BOOL)a1 locationType:(int)a2 loiIdentifier:(id)a3;

@end
