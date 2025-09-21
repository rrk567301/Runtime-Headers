@class NSString, NSNumber, SASStartSpeech;

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand, SATurnIdContaining>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *applicationName;
@property (nonatomic) char clearContext;
@property (nonatomic) char eyesFree;
@property (nonatomic) char handsFree;
@property (copy, nonatomic) NSString *hardwareBuild;
@property (copy, nonatomic) NSString *inputOrigin;
@property (copy, nonatomic) NSNumber *isCarryDevice;
@property (copy, nonatomic) NSNumber *isWatchFaceRequest;
@property (copy, nonatomic) NSString *motionActivity;
@property (copy, nonatomic) NSNumber *motionConfidence;
@property (copy, nonatomic) NSString *responseMode;
@property (retain, nonatomic) SASStartSpeech *sourceSpeechRequest;
@property (nonatomic) char talkOnly;
@property (nonatomic) char textToSpeechIsMuted;
@property (copy, nonatomic) NSString *turnId;
@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)startRequest;
+ (id)startRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
