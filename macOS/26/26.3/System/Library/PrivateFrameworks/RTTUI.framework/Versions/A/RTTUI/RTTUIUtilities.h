@class NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface RTTUIUtilities : NSObject

@property (nonatomic) BOOL headphoneJackSupportsTTY;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callCenterQueue;
@property (nonatomic) BOOL inUnitTestMode;
@property (retain, nonatomic) NSNumber *overrideLTR;

+ (BOOL)contactIsTTYContact:(id)a0;
+ (id)relayPhoneNumber;
+ (id)sharedUtilityProvider;
+ (BOOL)shouldUseRTT;
+ (BOOL)isRTTSupported;
+ (BOOL)relayIsSupported;
+ (BOOL)isOnlyRTTSupported;
+ (BOOL)softwareTTYIsSupported;
+ (BOOL)hardwareTTYIsSupported;
+ (void)cancelCallPromptDisplay;
+ (void)displayCallPromptForContact:(id)a0 withCompletion:(id /* block */)a1;
+ (id)ASCIINumericStringFromString:(struct __CFString { } *)a0;
+ (void)contactIsTTYContact:(id)a0 resultBlock:(id /* block */)a1;
+ (id)flipImageHorizontally:(id)a0;
+ (id)phoneNumberStringFromString:(id)a0;
+ (id)rttDisplayName:(long long)a0 forSubscriptionContextUUID:(id)a1;
+ (BOOL)ttyShouldBeRealtimeForCall:(id)a0;

- (BOOL)contactIsTTYContact:(id)a0;
- (id)init;
- (id)myPhoneNumber;
- (unsigned long long)currentPreferredTransportMethod;
- (id)ttyMeContact;
- (void).cxx_destruct;
- (id)conversationForCallUID:(id)a0;
- (BOOL)deleteConversationWithCallUID:(id)a0;
- (struct CGSize { double x0; double x1; })textInsetForMe:(BOOL)a0;
- (id)bubbleColorForMe:(BOOL)a0;
- (id)bubbleFillForMe:(BOOL)a0;
- (struct CGSize { double x0; double x1; })bubbleInsetForMe:(BOOL)a0;
- (id)largeTTYIconWithTint:(id)a0;
- (long long)textAlignmentForMe:(BOOL)a0;
- (id)tintedTTYIcon;
- (id)transcriptStringForConversation:(id)a0;
- (id)ttyIconWithTint:(id)a0;

@end
