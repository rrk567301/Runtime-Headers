@class VTPreferences, NSUUID, NSObject;
@protocol OS_dispatch_queue, CSVoiceTriggerUserSelectedPhraseDelegate;

@interface CSVoiceTriggerUserSelectedPhrase : NSObject

@property (retain, nonatomic) VTPreferences *vtPrefrences;
@property (retain, nonatomic) NSUUID *endpointDeviceId;
@property (nonatomic) char mphSelected;
@property (nonatomic) unsigned long long uSelectedPhraseType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CSVoiceTriggerUserSelectedPhraseDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (char)_isMultiPhrase:(unsigned long long)a0;
- (unsigned long long)_fetchUserSelectedPhraseType;
- (void)_registerForNotification;
- (id)initWithEndpointId:(id)a0;
- (id)initWithEndpointId:(id)a0 vtPreferences:(id)a1;
- (char)multiPhraseSelected;
- (unsigned long long)userSelectedPhraseType;
- (void)vtPhraseTypeDidChangeNotificationReceived;

@end
