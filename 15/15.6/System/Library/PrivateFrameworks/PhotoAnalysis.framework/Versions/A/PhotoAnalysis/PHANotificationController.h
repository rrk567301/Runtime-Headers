@class PGManager, PHUserFeedbackCalculator, PHPhotoLibrary, CPAnalytics, NSObject;
@protocol OS_os_log;

@interface PHANotificationController : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
    PHPhotoLibrary *_photoLibrary;
    CPAnalytics *_analytics;
    PGManager *_graphManager;
    PHUserFeedbackCalculator *_userFeedbackCalculator;
}

- (void).cxx_destruct;
- (char)shouldFireNotificationForMemoriesWithScores:(id)a0 withCreationReason:(unsigned long long)a1;
- (id)_userFeedbackCalculatorWithPhotoLibrary:(id)a0;
- (id)bestDateForDeliveringNotification;
- (void)fireNotificationForMemoryIdentifiers:(id)a0 withCreationReason:(unsigned long long)a1;
- (void)fireNotificationForSuggestionIdentifiers:(id)a0;
- (id)initWithGraphManager:(id)a0;
- (id)initWithGraphManager:(id)a0 userFeedbackCalculator:(id)a1;
- (void)postNotificationForMemory:(id)a0 withCreationReason:(unsigned long long)a1 forceImmediateDelivery:(char)a2;
- (void)postNotificationForSuggestion:(id)a0 deliveryDate:(id)a1;
- (char)userFeedbackScoreIsAcceptableForAssetCollection:(id)a0 memoryFeatures:(id)a1 userFeedbackCalculator:(id)a2;
- (char)userIsActivelyUsingPhotos;

@end
