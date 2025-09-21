@class SASetRequestOrigin, NSArray, NSString, NSNumber;

@interface SASStartSpeechRequest : SASStartSpeech

@property (nonatomic) char autoPunctuationEnabled;
@property (copy, nonatomic) NSArray *bargeInModes;
@property (copy, nonatomic) NSString *clientModelVersion;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSFinish;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSStart;
@property (nonatomic) char eyesFree;
@property (nonatomic) char handsFree;
@property (copy, nonatomic) NSString *responseMode;
@property (retain, nonatomic) SASetRequestOrigin *setRequestOrigin;
@property (nonatomic) char talkOnly;
@property (nonatomic) char textToSpeechIsMuted;
@property (copy, nonatomic) NSArray *voiceTriggerPhrases;
@property (nonatomic) char wasLaunchedForRequest;

+ (id)startSpeechRequest;
+ (id)startSpeechRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
