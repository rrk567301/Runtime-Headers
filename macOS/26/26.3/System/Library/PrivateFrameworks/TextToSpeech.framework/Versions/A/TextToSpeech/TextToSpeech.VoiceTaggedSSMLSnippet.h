@class NSString;

@interface TextToSpeech.VoiceTaggedSSMLSnippet : NSObject {
    void /* function */ ssml;
    void /* function */ voiceName;
    void /* function */ language;
}

@property (nonatomic, copy) NSString *ssml;
@property (nonatomic, copy) NSString *voiceName;
@property (nonatomic, copy) NSString *language;

- (id)init;
- (void).cxx_destruct;

@end
