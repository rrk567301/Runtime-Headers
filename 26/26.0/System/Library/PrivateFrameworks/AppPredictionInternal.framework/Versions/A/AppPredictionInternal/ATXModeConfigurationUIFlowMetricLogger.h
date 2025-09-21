@class ATXModeConfigurationUIFlowLoggingBiomeStream, ATXFocusModeSignalsMetricLogger, ATXFocusModeContactsMetricLogger;

@interface ATXModeConfigurationUIFlowMetricLogger : NSObject {
    ATXModeConfigurationUIFlowLoggingBiomeStream *_modeConfigurationUIFlowLoggingBiomeStream;
    ATXFocusModeSignalsMetricLogger *_focusModeSignalsLogger;
    ATXFocusModeContactsMetricLogger *_focusModeContactsLogger;
}

- (id)initWithContactStore:(id)a0;
- (id)init;
- (void)logCompletion:(id)a0;
- (void).cxx_destruct;
- (id)modeConfigurationUIFlowBookmark;
- (id)initWithFocusModeSignalsLogger:(id)a0 contactStore:(id)a1;
- (id)initWithModeConfigurationUIFlowLoggingBiomeStream:(id)a0 focusModeSignalsLogger:(id)a1 contactStore:(id)a2;
- (void)logModeConfigurationUIFlowMetric;
- (void)logModeConfigurationUIFlowMetricWithXPCActivity:(id)a0;
- (unsigned long long)numEntitiesAdded:(id)a0;
- (unsigned long long)numEntitiesRemoved:(id)a0;
- (unsigned long long)numSuggestedEntitiesAdded:(id)a0;
- (unsigned long long)numSuggestedEntitiesRemoved:(id)a0;
- (void)writeBookmarkToFile:(id)a0;

@end
