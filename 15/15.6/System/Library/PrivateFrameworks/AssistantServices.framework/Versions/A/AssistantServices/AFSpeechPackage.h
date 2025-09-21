@class NSNumber, AFSpeechRecognition, NSString, AFSpeechLatticeMitigatorResult, AFSpeechAudioAnalytics;

@interface AFSpeechPackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) AFSpeechRecognition *recognition;
@property (readonly, nonatomic) AFSpeechRecognition *unfilteredRecognition;
@property (readonly, nonatomic) AFSpeechRecognition *rawRecognition;
@property (readonly, nonatomic) AFSpeechAudioAnalytics *audioAnalytics;
@property (readonly, nonatomic) char isFinal;
@property (readonly, nonatomic) double utteranceStart;
@property (readonly, nonatomic) AFSpeechLatticeMitigatorResult *latticeMitigatorResult;
@property (readonly, nonatomic) char recognitionPaused;
@property (readonly, nonatomic) char speechProfileUsed;
@property (readonly, nonatomic) NSNumber *endOfSentenceLikelihood;
@property (readonly, nonatomic) AFSpeechPackage *potentialCommandPrecedingUtterance;
@property (readonly, nonatomic) AFSpeechPackage *potentialCommandUtterance;
@property (readonly, nonatomic) long long resultCandidateId;
@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) NSString *acousticModelVersion;
@property (readonly, nonatomic) long long numOneBestTokensExcludingTriggerPhrase;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithRecognition:(id)a0 rawRecognition:(id)a1 audioAnalytics:(id)a2 isFinal:(char)a3 utteranceStart:(double)a4 latticeMitigatorResult:(id)a5;
- (id)initWithRecognition:(id)a0 rawRecognition:(id)a1 audioAnalytics:(id)a2 isFinal:(char)a3 utteranceStart:(double)a4;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(char)a4 utteranceStart:(double)a5;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(char)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(char)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6 recognitionPaused:(char)a7;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(char)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6 recognitionPaused:(char)a7 speechProfileUsed:(char)a8;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(char)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6 recognitionPaused:(char)a7 speechProfileUsed:(char)a8 resultCandidateId:(long long)a9;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(char)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6 recognitionPaused:(char)a7 speechProfileUsed:(char)a8 resultCandidateId:(long long)a9 endOfSentenceLikelihood:(id)a10;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(char)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6 recognitionPaused:(char)a7 speechProfileUsed:(char)a8 resultCandidateId:(long long)a9 endOfSentenceLikelihood:(id)a10 modelVersion:(id)a11 acousticModelVersion:(id)a12;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(char)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6 recognitionPaused:(char)a7 speechProfileUsed:(char)a8 resultCandidateId:(long long)a9 endOfSentenceLikelihood:(id)a10 modelVersion:(id)a11 acousticModelVersion:(id)a12 potentialCommandPrecedingUtterance:(id)a13 potentialCommandUtterance:(id)a14;
- (id)initWithRecognition:(id)a0 unfilteredRecognition:(id)a1 rawRecognition:(id)a2 audioAnalytics:(id)a3 isFinal:(char)a4 utteranceStart:(double)a5 latticeMitigatorResult:(id)a6 recognitionPaused:(char)a7 speechProfileUsed:(char)a8 resultCandidateId:(long long)a9 endOfSentenceLikelihood:(id)a10 modelVersion:(id)a11 acousticModelVersion:(id)a12 potentialCommandPrecedingUtterance:(id)a13 potentialCommandUtterance:(id)a14 numOneBestTokensExcludingTriggerPhrase:(long long)a15;
- (void)setPotentialCommandPrecedingUtterance:(id)a0;
- (void)setPotentialCommandUtterance:(id)a0;

@end
