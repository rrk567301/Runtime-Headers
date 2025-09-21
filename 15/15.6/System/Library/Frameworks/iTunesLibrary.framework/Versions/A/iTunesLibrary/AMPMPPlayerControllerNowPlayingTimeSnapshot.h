@interface AMPMPPlayerControllerNowPlayingTimeSnapshot : NSObject <NSSecureCoding> {
    double _elapsedTime;
    double _timestamp;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isLive) char live;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double timeStamp;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) long long state;

+ (id)liveSnapshotWithRate:(float)a0 state:(long long)a1;
+ (id)snapshotWithElapsedTime:(double)a0 duration:(double)a1 rate:(float)a2 atTimestamp:(double)a3 state:(long long)a4;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;

@end
