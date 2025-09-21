@class SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue;

@interface IMMetricsCollector : NSObject {
    SDRDiagnosticReporter *_diagnosticReporter;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)trackSpamEvent:(unsigned long long)a0;
- (void)trackDeleteMessages:(id)a0 sourceType:(unsigned long long)a1;
- (void *)_ADClientAddValueForScalarKeyApiInit;
- (void *)_ADClientPushValueForDistributionKeyApiInit;
- (void *)_ADClientSetValueForScalarKeyApiInit;
- (id)_stringForDeleteMessagesType:(unsigned long long)a0;
- (id)_stringForFZErrorType:(unsigned int)a0;
- (id)_stringForSpamType:(unsigned long long)a0;
- (id)_stringForiMessageJunkType:(unsigned long long)a0;
- (void)_trackEvent:(id)a0;
- (void)_trackEvent:(id)a0 withCount:(id)a1;
- (void)_trackEvent:(id)a0 withDictionary:(id)a1;
- (void)_trackEvent:(id)a0 withStatistic:(id)a1;
- (void)_trackTranscodeFailureWithReason:(unsigned long long)a0 messageType:(unsigned long long)a1 sourceFile:(id)a2 sizeLimits:(id)a3 isSticker:(char)a4 lowQualityModeEnabled:(char)a5;
- (void)_trackTranscodeWithReason:(unsigned long long)a0 messageType:(unsigned long long)a1 sourceFile:(id)a2 highQualityFile:(id)a3 lowQualityFile:(id)a4 sizeLimits:(id)a5 isSticker:(char)a6 transcoded:(char)a7 lowQualityModeEnabled:(char)a8;
- (void)autoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1;
- (void)forceAutoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1;
- (void)forceAutoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1 type:(id)a2 context:(id)a3;
- (void)forceAutoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1 type:(id)a2 context:(id)a3 metadata:(id)a4;
- (unsigned long long)keepMessagesSourceTypeForDays:(long long)a0;
- (void)metricAttachmentValidation:(char)a0 attachmentSize:(id)a1 operationalErrorDomain:(id)a2 operationalErrorCode:(id)a3 validationErrorDomain:(id)a4 validationErrorCode:(id)a5;
- (char)trackAction:(id)a0 extensionBundleID:(id)a1 isNotification:(char)a2;
- (void)trackAttachmentDownloadLimitExceeded:(unsigned long long)a0 limitSize:(id)a1 fileSize:(id)a2 qualityType:(unsigned long long)a3 isSticker:(char)a4 lowQualityModeEnabled:(char)a5;
- (void)trackAttachmentDownloadSuccess:(id)a0 limitType:(unsigned long long)a1 limitSize:(id)a2 qualityType:(unsigned long long)a3 isSticker:(char)a4 lowQualityModeEnabled:(char)a5;
- (void)trackAttachmentRenderingAttempt:(char)a0 failureReason:(id)a1;
- (char)trackEvent:(id)a0;
- (char)trackEvent:(id)a0 withCount:(id)a1;
- (char)trackEvent:(id)a0 withDictionary:(id)a1;
- (char)trackEvent:(id)a0 withStatistic:(id)a1;
- (void)trackMMSTranscodeFailureWithReason:(unsigned long long)a0 sourceFile:(id)a1 sizeLimits:(id)a2 lowQualityModeEnabled:(char)a3;
- (void)trackMMSTranscodeWithReason:(unsigned long long)a0 sourceFile:(id)a1 highQualityFile:(id)a2 lowQualityFile:(id)a3 sizeLimits:(id)a4 transcoded:(char)a5 lowQualityModeEnabled:(char)a6;
- (void)trackMessagesWithoutChatsWithContext:(id)a0;
- (void)trackRCSTranscodeFailureWithReason:(unsigned long long)a0 sourceFile:(id)a1 sizeLimits:(id)a2 isSticker:(char)a3 lowQualityModeEnabled:(char)a4;
- (void)trackRCSTranscodeWithReason:(unsigned long long)a0 sourceFile:(id)a1 highQualityFile:(id)a2 lowQualityFile:(id)a3 sizeLimits:(id)a4 isSticker:(char)a5 transcoded:(char)a6 lowQualityModeEnabled:(char)a7;
- (void)trackSentMessageEventOfType:(id)a0 subtype:(id)a1 sendDuration:(id)a2 wasSuccessful:(char)a3 handle:(id)a4 error:(unsigned int)a5;
- (void)trackSpamEvent:(unsigned long long)a0 withDictionary:(id)a1;
- (void)trackiMessageJunkEvent:(unsigned long long)a0;
- (void)trackiMessageJunkEvent:(unsigned long long)a0 withDictionary:(id)a1;
- (void)trackiMessageTranscodeFailureWithReason:(unsigned long long)a0 sourceFile:(id)a1 sizeLimits:(id)a2 isSticker:(char)a3 lowQualityModeEnabled:(char)a4;
- (void)trackiMessageTranscodeWithReason:(unsigned long long)a0 sourceFile:(id)a1 highQualityFile:(id)a2 lowQualityFile:(id)a3 sizeLimits:(id)a4 isSticker:(char)a5 transcoded:(char)a6 lowQualityModeEnabled:(char)a7;

@end
