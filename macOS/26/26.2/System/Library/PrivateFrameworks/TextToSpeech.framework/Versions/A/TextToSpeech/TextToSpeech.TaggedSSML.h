@class NSArray, NSString;

@interface TextToSpeech.TaggedSSML : NSObject {
    void /* function */ ssmlSnippets;
    void /* function */ originalSSML;
}

@property (nonatomic, copy) NSArray *ssmlSnippets;
@property (nonatomic, copy) NSString *originalSSML;

- (void).cxx_destruct;
- (id)init;

@end
