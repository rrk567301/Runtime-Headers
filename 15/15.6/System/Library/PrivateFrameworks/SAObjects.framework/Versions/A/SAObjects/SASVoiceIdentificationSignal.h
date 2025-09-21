@class NSString;

@interface SASVoiceIdentificationSignal : SABaseClientBoundCommand

@property (nonatomic) char recordUserAudio;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (copy, nonatomic) NSString *selectedSharedUserId;

+ (id)voiceIdentificationSignal;
+ (id)voiceIdentificationSignalWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
