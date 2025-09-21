@class CKContextFingerprintMinHash, NSString, NSArray, NSDictionary, NSError, NSDate, CKContextRequest;

@interface CKContextResponse : NSObject <NSSecureCoding> {
    char _discarded;
    double _hideCompletionsTimeLimit;
    _Atomic BOOL _shown;
    _Atomic BOOL _engaged;
    _Atomic BOOL _transactionSuccessful;
    _Atomic BOOL _shownLogged;
    _Atomic BOOL _engagementLogged;
    _Atomic BOOL _transactionLogged;
    NSArray *_loggingCouldHaveShown;
    _Atomic unsigned int _loggingShownMax;
    _Atomic BOOL _loggingServerOverride;
    _Atomic unsigned int _loggingCouldHaveShownMax;
    _Atomic unsigned int _loggingInputLengthMax;
}

@property (class, readonly, nonatomic) NSError *serviceDisabledError;
@property (class, readonly, nonatomic) NSError *serviceBusyError;
@property (class, readonly, nonatomic) NSError *missingEntitlementError;
@property (class, readonly, nonatomic) NSError *invalidProcessError;
@property (class, readonly, nonatomic) NSError *timeoutError;
@property (class, readonly, nonatomic) NSError *malformedRequestError;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char resultsNeedFiltering;
@property (nonatomic) unsigned long long mustPrefixMatchLength;
@property (retain, nonatomic) NSDate *hideCompletionsAfterDate;
@property (retain, nonatomic) NSDate *responseDate;
@property (retain, nonatomic) CKContextRequest *debugRequest;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSArray *level1Topics;
@property (retain, nonatomic) NSArray *level2Topics;
@property (retain, nonatomic) NSArray *donorBundleIdentifiers;
@property (retain, nonatomic) NSString *languageTag;
@property (retain, nonatomic) NSString *debug;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) struct CGSize { double width; double height; } availableLayoutSize;
@property (copy, nonatomic) NSDictionary *partsOfSpeechToTexts;
@property (retain, nonatomic) CKContextFingerprintMinHash *requestFingerprint;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isPlaceholder;
- (void)discard;
- (id)completer;
- (id)toJSONSerializableDictionary;
- (void)addDebug:(id)a0;
- (void)appendToDebug:(id)a0;
- (void)discardAndLogCompleter:(id)a0 likelyUnsolicited:(char)a1;
- (id)initPlaceholderWithUUID:(id)a0 requestType:(unsigned long long)a1;
- (id)initWithError:(id)a0 requestType:(unsigned long long)a1;
- (id)initWithResults:(id)a0 requestType:(unsigned long long)a1;
- (void)logEngagement:(id)a0 forInputLength:(unsigned long long)a1 completion:(id)a2 likelyUnsolicited:(char)a3;
- (void)logTransactionSuccessfulForInputLength:(unsigned long long)a0 completion:(id)a1 likelyUnsolicited:(char)a2;
- (void)markResultsShown:(unsigned long long)a0 serverOverride:(char)a1 forInputLength:(unsigned long long)a2 results:(id)a3;
- (id)responseSummary:(char)a0 showHigherLevelTopics:(char)a1 maxPrefix:(long long)a2;
- (id)resultByQuery:(id)a0;
- (void)setHideCompletionsTimeLimit:(double)a0;

@end
