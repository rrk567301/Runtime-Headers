@interface SNCorrelateAudioRequest : NSObject <SNRequest> {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic) double overlapFactor;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAudioFile:(id)a0;
- (id)initWithAudioFile:(id)a0 overlapFactor:(double)a1;

@end
