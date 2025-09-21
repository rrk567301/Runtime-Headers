@protocol _STSpeechTranslatorClientConforming;

@interface _STSpeechTranslatorClientContext : NSObject

@property (retain, nonatomic) id<_STSpeechTranslatorClientConforming> clientPeer;
@property (nonatomic) BOOL produceAudio;
@property (nonatomic) BOOL produceTranscripts;
@property (nonatomic) BOOL produceTranslatedText;

- (id)description;
- (void).cxx_destruct;
- (id)initWithClientPeer:(id)a0;

@end
