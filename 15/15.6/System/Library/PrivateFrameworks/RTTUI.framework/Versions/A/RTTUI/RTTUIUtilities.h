@class NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface RTTUIUtilities : NSObject

@property (nonatomic) char headphoneJackSupportsTTY;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callCenterQueue;
@property (nonatomic) char inUnitTestMode;
@property (retain, nonatomic) NSNumber *overrideLTR;

+ (char)contactIsTTYContact:(id)a0;
+ (char)relayIsSupported;
+ (id)sharedUtilityProvider;
+ (char)hardwareTTYIsSupported;
+ (char)isRTTSupported;
+ (char)softwareTTYIsSupported;
+ (void)cancelCallPromptDisplay;
+ (void)displayCallPromptForContact:(id)a0 withCompletion:(id /* block */)a1;
+ (char)isOnlyRTTSupported;
+ (id)relayPhoneNumber;
+ (char)shouldUseRTT;
+ (id)ASCIINumericStringFromString:(struct __CFString { } *)a0;
+ (void)contactIsTTYContact:(id)a0 resultBlock:(id /* block */)a1;
+ (id)flipImageHorizontally:(id)a0;
+ (id)phoneNumberStringFromString:(id)a0;
+ (id)rttDisplayName:(long long)a0 forSubscriptionContextUUID:(id)a1;
+ (char)ttyShouldBeRealtimeForCall:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)contactIsTTYContact:(id)a0;
- (unsigned long long)currentPreferredTransportMethod;
- (id)conversationForCallUID:(id)a0;
- (char)deleteConversationWithCallUID:(id)a0;
- (id)myPhoneNumber;
- (id)ttyMeContact;
- (struct CGSize { double x0; double x1; })textInsetForMe:(char)a0;
- (id)bubbleColorForMe:(char)a0;
- (id)bubbleFillForMe:(char)a0;
- (struct CGSize { double x0; double x1; })bubbleInsetForMe:(char)a0;
- (id)largeTTYIconWithTint:(id)a0;
- (long long)textAlignmentForMe:(char)a0;
- (id)tintedTTYIcon;
- (id)transcriptStringForConversation:(id)a0;
- (id)ttyIconWithTint:(id)a0;

@end
