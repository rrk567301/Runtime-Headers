@class NSString, NSSet, ATXSuggestedPagesTunableConstants;

@interface ATXModeFaceComplicationHeuristicDataSource : NSObject <ATXModeFaceComplicationDataSource> {
    NSSet *_allComplicationDescriptors;
    NSSet *_allWidgetDescriptors;
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_hasSignificantStocksEvents;
- (id)_landscapeComplicationsForReadingMode;
- (BOOL)_hasTVInterest;
- (id)_landscapeComplicationsForPersonalMode;
- (id)_landscapeComplicationsForGamingMode;
- (id)_complicationsForGamingMode;
- (id)_complicationsForDrivingMode;
- (id)_complicationsForMindfulnessMode;
- (id)_complicationsForPersonalMode;
- (id)provideLandscapeComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (BOOL)_hasSignificantRemindersEvents;
- (void).cxx_destruct;
- (id)_landscapeComplicationsForExerciseMode;
- (id)_landscapeComplicationsForReduceInterruptions;
- (id)_landscapeComplicationsForDrivingMode;
- (id)_landscapeComplicationsForMindfulnessMode;
- (id)_complicationsForWorkMode;
- (id)init;
- (id)_landscapeComplicationsForSleepMode;
- (id)provideComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (void)_addComplicationWithFamily:(long long)a0 extension:(id)a1 kind:(id)a2 container:(id)a3 score:(double)a4 to:(id)a5;
- (id)_landscapeComplicationsForWorkMode;
- (id)_complicationsForExerciseMode;
- (id)_complicationsForSleepMode;
- (void)_addSystemSmallWidgetWithExtension:(id)a0 kind:(id)a1 container:(id)a2 score:(double)a3 to:(id)a4;
- (id)_complicationsForReadingMode;
- (id)_complicationsForReduceInterruptions;

@end
