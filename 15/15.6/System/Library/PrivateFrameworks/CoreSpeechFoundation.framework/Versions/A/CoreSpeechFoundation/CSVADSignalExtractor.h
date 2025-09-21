@class NSMutableArray;
@protocol CSVADSignalExtractorDelegate;

@interface CSVADSignalExtractor : NSObject

@property (nonatomic) char isSpeechDetected;
@property (weak, nonatomic) id<CSVADSignalExtractorDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *speechDetectedRanges;
@property (nonatomic) unsigned long long lastSpeechStartSampleCount;
@property (readonly, nonatomic) char hasSpeechEverDetected;

- (void).cxx_destruct;
- (void)reset;
- (char)hasSpeechDetectedFromStartSampleCount:(unsigned long long)a0 toEndSampleCount:(unsigned long long)a1;
- (id)initWithToken:(id)a0 delegate:(id)a1;
- (void)processBufferSampleWithIndex:(unsigned long long)a0 startSampleCount:(unsigned long long)a1 isSampleRepresentSpeech:(char)a2 vadToSpeechRatio:(unsigned long long)a3;

@end
