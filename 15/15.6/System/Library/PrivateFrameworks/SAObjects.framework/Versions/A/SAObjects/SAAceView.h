@class SAVoice, NSString, SADialog, NSDictionary, NSNumber, SAUIListenAfterSpeakingBehavior;
@protocol SAAceSerializable;

@interface SAAceView : SABaseAceObject <SAAceSerializable>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char canBeRefreshed;
@property (nonatomic) char canUseServerTTS;
@property (retain, nonatomic) id<SAAceSerializable> context;
@property (copy, nonatomic) NSNumber *deferredRendering;
@property (copy, nonatomic) NSNumber *delayDismissalMs;
@property (retain, nonatomic) SADialog *dialog;
@property (nonatomic) char disableDeviceRacing;
@property (nonatomic) char isTransient;
@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSString *correspondingSessionID;
@property (copy, nonatomic) NSNumber *listenAfterSpeaking;
@property (retain, nonatomic) SAUIListenAfterSpeakingBehavior *listenAfterSpeakingBehavior;
@property (retain, nonatomic) SAVoice *preferredSpeakableTextVoice;
@property (nonatomic) char preserveResultSpaceIfPossible;
@property (copy, nonatomic) NSString *redactedSpeakableText;
@property (copy, nonatomic) NSDictionary *speakableContextInfo;
@property (copy, nonatomic) NSString *speakableText;
@property (copy, nonatomic) NSString *viewId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aceViewWithDictionary:(id)a0 context:(id)a1;
+ (id)aceView;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
