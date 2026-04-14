@class NSObject;
@protocol OS_dispatch_queue;

@interface TTYUtilities : NSObject

@property (nonatomic) BOOL headphoneJackSupportsTTY;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callCenterQueue;
@property (nonatomic) BOOL inUnitTestMode;

+ (id)sharedUtilityProvider;
+ (BOOL)contactIsTTYContact:(id)a0;
+ (BOOL)relayIsSupported;
+ (BOOL)isRTTSupported;
+ (BOOL)hardwareTTYIsSupported;
+ (BOOL)softwareTTYIsSupported;
+ (BOOL)isAppleInternalBuild;
+ (void)performCallCenterTask:(id /* block */)a0;
+ (id)sharedCallCenter;
+ (id)relayPhoneNumber;
+ (BOOL)isOnlyRTTSupported;
+ (BOOL)shouldUseRTT;
+ (void)displayCallPromptForContact:(id)a0 withCompletion:(id /* block */)a1;
+ (void)cancelCallPromptDisplay;
+ (BOOL)ttyShouldBeRealtimeForCall:(id)a0;
+ (id)ASCIINumericStringFromString:(struct __CFString { } *)a0;
+ (id)flipImageHorizontally:(id)a0;
+ (void)contactIsTTYContact:(id)a0 resultBlock:(id /* block */)a1;
+ (id)phoneNumberStringFromString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)contactIsTTYContact:(id)a0;
- (unsigned long long)currentPreferredTransportMethod;
- (id)conversationForCallUID:(id)a0;
- (BOOL)deleteConversationWithCallUID:(id)a0;
- (void)setTTYDictionaryAvailability:(BOOL)a0;
- (id)myPhoneNumber;
- (id)ttyMeContact;
- (id)ttyIconWithTint:(id)a0;
- (long long)textAlignmentForMe:(BOOL)a0;
- (id)bubbleColorForMe:(BOOL)a0;
- (struct CGSize { double x0; double x1; })textInsetForMe:(BOOL)a0;
- (struct CGSize { double x0; double x1; })bubbleInsetForMe:(BOOL)a0;
- (id)largeTTYIconWithTint:(id)a0;
- (id)tintedTTYIcon;
- (id)bubbleFillForMe:(BOOL)a0;

@end
