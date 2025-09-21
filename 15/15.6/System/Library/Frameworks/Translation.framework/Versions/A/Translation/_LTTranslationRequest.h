@class NSUUID, NSString, NSURL, _LTLocalePair;

@interface _LTTranslationRequest : NSObject <_LTSpeechTranslationDelegate>

@property (copy, nonatomic) NSUUID *batchSessionUUID;
@property (readonly, nonatomic) NSString *loggingType;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *qssSessionID;
@property (nonatomic) long long taskHint;
@property (readonly, nonatomic) _LTLocalePair *localePair;
@property (retain, nonatomic) NSURL *outputFileURL;
@property (nonatomic) char censorSpeech;
@property (nonatomic) char forcedOfflineTranslation;
@property (nonatomic) char _forcedOnlineTranslation;
@property (retain, nonatomic) NSURL *_offlineMTModelURL;
@property (nonatomic) long long _mtConfidenceThreshold;
@property (nonatomic) char autodetectLanguage;
@property (nonatomic) char forceSourceLocale;
@property (copy, nonatomic) NSString *appIdentifier;
@property (nonatomic) long long sourceOrigin;
@property (nonatomic) char isFinal;
@property (nonatomic) char _supportsGenderDisambiguation;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) char overrideOngoingSessionIfNeeded;
@property (nonatomic) char cleanUpExistingSpeechSession;
@property (copy, nonatomic) NSUUID *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)requestContext;
- (id)serviceDelegate;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (char)_canUseTextService;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (void)_startTranslationWithTextService:(id)a0 done:(id /* block */)a1;
- (void)_translationFailedWithError:(id)a0;
- (id)initWithLocalePair:(id)a0;
- (id)initWithLocalePair:(id)a0 suggestedUniqueID:(id)a1;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1 suggestedUniqueID:(id)a2;

@end
