@class NSString, NSData;

@interface SSRSpeakerProfileEmbedding : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *siriSharedUserId;
@property (readonly, nonatomic) NSData *embeddings;
@property (readonly, nonatomic) unsigned int numEmbedding;
@property (readonly, nonatomic) unsigned int dimension;
@property (readonly, nonatomic) unsigned long long speakerRecognizerType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSiriSharedUserId:(id)a0 embeddings:(id)a1 numEmbedding:(unsigned int)a2 dimension:(unsigned int)a3 speakerRecognizerType:(unsigned long long)a4;

@end
