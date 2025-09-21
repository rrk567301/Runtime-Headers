@class NSString, NSArray, NSLocale;

@interface VATSpeechRecognitionResult : NSObject

@property (nonatomic, getter=isFinal) char final;
@property (nonatomic, getter=isStable) char stable;
@property (retain, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSArray *transcriptions;

+ (id)emptyResultWithLocale:(id)a0 isFinal:(char)a1;
+ (id)resultWithPackage:(id)a0 locale:(id)a1 modelVersion:(id)a2 isFinal:(char)a3;
+ (id)resultWithResults:(id)a0 locale:(id)a1 modelVersion:(id)a2 isFinal:(char)a3;

- (void).cxx_destruct;
- (id)bestTranscription;
- (id)_transcriptionWithResult:(id)a0 locale:(id)a1;
- (id)initEmptyResultWithLocale:(id)a0 isFinal:(char)a1;
- (id)initWithPackage:(id)a0 locale:(id)a1 modelVersion:(id)a2 isFinal:(char)a3;
- (id)initWithResults:(id)a0 locale:(id)a1 modelVersion:(id)a2 isFinal:(char)a3;

@end
