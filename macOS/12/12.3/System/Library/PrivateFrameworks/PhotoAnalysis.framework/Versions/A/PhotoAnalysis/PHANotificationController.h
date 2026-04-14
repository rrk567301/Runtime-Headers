@class PHUserFeedbackCalculator, PGManager, NSObject;
@protocol OS_os_log;

@interface PHANotificationController : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
    PGManager *_graphManager;
    PHUserFeedbackCalculator *_userFeedbackCalculator;
}

- (void).cxx_destruct;
- (id)initWithGraphManager:(id)a0;
- (BOOL)shouldFireNotificationForMemories:(id)a0 withCreationReason:(unsigned long long)a1;
- (void)fireNotificationForMemoryIdentifiers:(id)a0 withCreationReason:(unsigned long long)a1;
- (id)initWithGraphManager:(id)a0 userFeedbackCalculator:(id)a1;
- (BOOL)shouldFireNotificationForMemoriesWithScores:(id)a0 withCreationReason:(unsigned long long)a1;
- (id)_userFeedbackCalculatorWithPhotoLibrary:(id)a0;
- (void)fireNotificationForSuggestionIdentifiers:(id)a0;
- (BOOL)userFeedbackScoreIsAcceptableForAssetCollection:(id)a0 memoryFeatures:(id)a1 userFeedbackCalculator:(id)a2;
- (void)postNotificationForMemory:(id)a0 withCreationReason:(unsigned long long)a1 forceImmediateDelivery:(BOOL)a2;
- (id)bestDateForDeliveringNotification;
- (void)postNotificationForSuggestion:(id)a0 deliveryDate:(id)a1;
- (BOOL)userIsActivelyUsingPhotos;

@end
