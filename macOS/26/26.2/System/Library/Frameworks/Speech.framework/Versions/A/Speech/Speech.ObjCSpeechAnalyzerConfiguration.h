@class AVAudioFormat;

@interface Speech.ObjCSpeechAnalyzerConfiguration : NSObject {
    void /* unknown type, empty encoding */ modules;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ clientIdentifier;
    void /* unknown type, empty encoding */ formatForNewLines;
}

@property (nonatomic, retain) AVAudioFormat *audioFormat;

- (void).cxx_destruct;
- (id)init;

@end
