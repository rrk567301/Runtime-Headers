@class NSString, NSData;

@interface SSRSpeakerProfileEmbedding : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *siriSharedUserId;
@property (readonly, nonatomic) NSString *voiceProfileId;
@property (readonly, nonatomic) NSData *embeddings;
@property (readonly, nonatomic) unsigned int numEmbedding;
@property (readonly, nonatomic) unsigned int dimension;
@property (readonly, nonatomic) unsigned long long speakerRecognizerType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSiriSharedUserId:(id)a0 embeddings:(id)a1 numEmbedding:(unsigned int)a2 dimension:(unsigned int)a3 speakerRecognizerType:(unsigned long long)a4;
- (id)initWithVoiceProfileId:(id)a0 embeddings:(id)a1 numEmbedding:(unsigned int)a2 dimension:(unsigned int)a3 speakerRecognizerType:(unsigned long long)a4;

@end
