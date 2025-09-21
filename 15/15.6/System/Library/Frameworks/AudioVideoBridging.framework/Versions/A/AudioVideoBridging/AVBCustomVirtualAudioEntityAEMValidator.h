@class NSArray, AVB17221AEMEntity;

@interface AVBCustomVirtualAudioEntityAEMValidator : NSObject

@property (retain) AVB17221AEMEntity *aemEntity;
@property (retain) NSArray *validationErrors;
@property (retain) NSArray *validationWarnings;
@property (readonly) char succeeded;

+ (id)validateCustomVirtualAudioEntityWithModel:(id)a0;
+ (id)validateCustomVirtualAudioEntityWithModelFromPlist:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)runValidation;
- (id)initWithCustomVirtualAudioEntityModel:(id)a0;
- (id)localeIndicesMissingLocalizedString:(id)a0 inConfig:(id)a1;
- (id)localesMissingLocalizedString:(id)a0 inConfig:(id)a1;
- (unsigned int)numChannelsInStreamFormat:(id)a0;
- (char)validateCustomVirtualAudioEntityAEMAudioUnit:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (char)validateCustomVirtualAudioEntityAEMClockDomain:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (char)validateCustomVirtualAudioEntityAEMClockSource:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (char)validateCustomVirtualAudioEntityAEMConfig:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (char)validateCustomVirtualAudioEntityAEMEntity:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (char)validateCustomVirtualAudioEntityAEMMemoryObject:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (char)validateCustomVirtualAudioEntityAEMStream:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (char)validateCustomVirtualAudioEntityAEMStreamPort:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (char)validateCustomVirtualAudioEntityHasOneSourcePerSinkInConfig:(id)a0 loggingErrorsTo:(id)a1 loggingWarningsTo:(id)a2;
- (char)validateLocalizedStringRef:(id)a0 withFieldName:(id)a1 forObject:(id)a2 inConfiguration:(id)a3 loggingErrorsTo:(id)a4 loggingWarningsTo:(id)a5;
- (char)validateObjectName:(id)a0 andLocalizedDescription:(id)a1 forObject:(id)a2 inConfiguration:(id)a3 loggingErrorsTo:(id)a4 loggingWarningsTo:(id)a5;

@end
