@class MPTranscriptAlignment, MRTranscriptAlignment;

@interface MPNowPlayingInfoTranscriptAlignment : NSObject

@property (readonly, nonatomic) MRTranscriptAlignment *mrTranscriptAlignment;
@property (readonly, nonatomic) MPTranscriptAlignment *mpTranscriptAlignment;
@property (readonly, nonatomic) double playerStartTime;
@property (readonly, nonatomic) double playerEndTime;
@property (readonly, nonatomic) double referenceStartTime;
@property (readonly, nonatomic) double referenceEndTime;
@property (readonly, nonatomic) char matchedBeginning;
@property (readonly, nonatomic) char matchedEnd;

- (id)initWithPlayerStartTime:(double)a0 playerEndTime:(double)a1 referenceStartTime:(double)a2 referenceEndTime:(double)a3 matchedBeginning:(char)a4 matchedEnd:(char)a5;
- (id)initWithMRTranscriptAlignment:(id)a0;

@end
