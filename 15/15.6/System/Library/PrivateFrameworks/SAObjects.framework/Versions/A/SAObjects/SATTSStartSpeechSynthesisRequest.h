@class NSString, NSDictionary;

@interface SATTSStartSpeechSynthesisRequest : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *audioType;
@property (nonatomic) char enableAudioInfo;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *quality;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (nonatomic) char streaming;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *voiceName;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)startSpeechSynthesisRequest;
+ (id)startSpeechSynthesisRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
