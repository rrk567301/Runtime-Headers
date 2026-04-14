@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SSRVoiceProfileComposer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *speechId;

+ (id)sharedTrainer;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_addUtteranceHelper:(id)a0 toProfile:(id)a1 withAnalyzer:(id)a2 withPreTriggerAudioTime:(double)a3 withError:(id *)a4;
- (id)_getAnalyzerWithAsset:(id)a0 forProfile:(id)a1;
- (id)_getAnalyzerWithSecureAsset:(id)a0;
- (double)_getPreTriggerAudioTimeFromAsset:(id)a0;
- (double)_getPreTriggerAudioTimeFromSecureAsset:(id)a0;
- (BOOL)addUtterance:(id)a0 toProfile:(id)a1;
- (BOOL)addUtterance:(id)a0 toProfile:(id)a1 withAsset:(id)a2 error:(id *)a3;
- (BOOL)addUtterance:(id)a0 toProfile:(id)a1 withAsset:(id)a2 withDonationInfo:(id)a3;
- (BOOL)addUtterance:(id)a0 toProfile:(id)a1 withSecureAsset:(id)a2 error:(id *)a3;
- (void)logEnrollmentUtterance:(id)a0 locale:(id)a1 utteranceId:(unsigned long long)a2 mhUUID:(id)a3 phId:(unsigned long long)a4;

@end
