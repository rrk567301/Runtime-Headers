@class NSString, NSArray, NSURL, NSUUID, _LTLocalePair;

@interface _LTTranslationContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) long long taskHint;
@property (copy, nonatomic) _LTLocalePair *localePair;
@property (nonatomic) char autodetectLanguage;
@property (nonatomic) char forceSourceLocale;
@property (nonatomic) char censorSpeech;
@property (copy, nonatomic) NSURL *outputFileURL;
@property (copy, nonatomic) NSArray *asrModelURLs;
@property (copy, nonatomic) NSURL *mtModelURL;
@property (copy, nonatomic) NSURL *sourceURL;
@property (nonatomic) char autoEndpoint;
@property (nonatomic) char overrideOngoingSessionIfNeeded;
@property (nonatomic) char cleanUpExistingSpeechSession;
@property (nonatomic) char isFinal;
@property (nonatomic) long long lidThreshold;
@property (nonatomic) long long route;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) long long asrConfidenceThreshold;
@property (nonatomic) double ttsPlaybackRate;
@property (nonatomic) char muteTTSBasedOnRingerSwitchIfPossible;
@property (nonatomic) char enableVAD;
@property (nonatomic) char cancelOnCleanup;
@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSUUID *logIdentifier;
@property (nonatomic) long long sourceOrigin;
@property (nonatomic) char supportsGenderDisambiguation;
@property (copy, nonatomic) NSString *untrustedClientIdentifier;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *trustedClientIdentifier;
@property (nonatomic) long long dataSharingOptInStatus;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)sanitizedCopyForUntrustedTextTranslation;

@end
