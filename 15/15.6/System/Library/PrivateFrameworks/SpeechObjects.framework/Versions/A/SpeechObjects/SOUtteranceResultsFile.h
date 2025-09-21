@class NSString, NSData, NSMutableArray;

@interface SOUtteranceResultsFile : NSObject

@property double creationDate;
@property (retain) NSString *creatorName;
@property (retain) NSString *creatorArguments;
@property (retain) NSString *recognizerType;
@property (retain) NSString *localeIdentifier;
@property (retain) NSData *audioFileData;
@property (retain) NSString *rxGrammar;
@property (retain) NSMutableArray *utteranceResults;
@property struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } streamDescription;
@property double firstUtteranceStartTime;

- (void)dealloc;
- (id)init;
- (id)initWithContentsOfFile:(id)a0;
- (char)writeToFile:(id)a0;
- (id)_dictionary;
- (void)appendUtteranceResult:(id)a0;
- (char)exportAudioDataToFile:(id)a0;
- (char)exportRXGrammarToFile:(id)a0;
- (char)importAudioDataFromFile:(id)a0;
- (char)importRXGrammarFromFile:(id)a0;

@end
