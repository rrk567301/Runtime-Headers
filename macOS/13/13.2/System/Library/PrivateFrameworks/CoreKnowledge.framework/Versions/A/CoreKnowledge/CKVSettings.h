@class NSDictionary, CKVLocalization, CKVSearchContext;

@interface CKVSettings : NSObject <NSSecureCoding> {
    _Atomic unsigned char _enablementOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *simulatedPriors;
@property (readonly, nonatomic) CKVSearchContext *searchContext;
@property (readonly) CKVLocalization *localization;

+ (id)defaultSettings;
+ (id)defaultSandboxSettings;
+ (id)sandboxSettingsWithLocale:(id)a0 error:(id *)a1;
+ (unsigned char)defaultEnablementOptions;
+ (BOOL)_isSandboxEnabled:(unsigned char)a0;
+ (BOOL)_isEvaluationEnabled:(unsigned char)a0;
+ (BOOL)isDonationEnabled:(unsigned char)a0;
+ (BOOL)_isDonationEnabled:(unsigned char)a0;
+ (BOOL)_isSpeechProfileEnabled:(unsigned char)a0;
+ (BOOL)isSkitEnabled:(unsigned char)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSpeechProfileEnabled;
- (id)initWithLocalization:(id)a0 enablementOptions:(unsigned char)a1;
- (void)refreshLocalization;
- (void)refreshEnablementOptions;
- (unsigned char)enablementOptions;
- (BOOL)isSandboxEnabled;
- (BOOL)isEvaluationEnabled;
- (void)setEvaluationEnabled:(BOOL)a0;
- (BOOL)isSpeechProfileEnabledForAssistant;
- (BOOL)isSpeechProfileEnabledForDictation;
- (BOOL)shouldOverrideSpeechProfileDeferral;
- (BOOL)isSkitEnabled;
- (BOOL)isTaskEnabled:(unsigned short)a0 isAdmin:(BOOL)a1;
- (BOOL)isXPCDonationEnabled:(long long)a0;

@end
