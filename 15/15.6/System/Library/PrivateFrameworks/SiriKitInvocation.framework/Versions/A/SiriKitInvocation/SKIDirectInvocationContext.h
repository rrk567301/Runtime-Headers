@class NSString;

@interface SKIDirectInvocationContext : NSObject

@property (nonatomic, getter=isVoiceTriggerEnabled) char voiceTriggerEnabled;
@property (nonatomic, getter=isTextToSpeechEnabled) char textToSpeechEnabled;
@property (nonatomic, getter=isEyesFree) char eyesFree;
@property (copy, nonatomic) NSString *inputOrigin;
@property (copy, nonatomic) NSString *interactionType;
@property (copy, nonatomic) NSString *responseMode;

+ (id)contextForAnnounceNotifications;
+ (id)contextForCarPlayDirectAction;

- (id)init;
- (void).cxx_destruct;

@end
