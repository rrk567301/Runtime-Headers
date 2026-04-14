@class FTStartTextToSpeechStreamingRequest;

@interface FTMutableTextToSpeechStreamingStreamingRequest : FTTextToSpeechStreamingStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTStartTextToSpeechStreamingRequest *contentAsFTStartTextToSpeechStreamingRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
