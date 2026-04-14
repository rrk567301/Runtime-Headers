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

- (id)provideComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)_landscapeComplicationsForWorkMode;
- (void)_addComplicationWithFamily:(long long)a0 extension:(id)a1 kind:(id)a2 container:(id)a3 score:(double)a4 to:(id)a5;
- (id)_complicationsForGamingMode;
- (id)_complicationsForDrivingMode;
- (id)_landscapeComplicationsForMindfulnessMode;
- (BOOL)_hasTVInterest;
- (id)_landscapeComplicationsForPersonalMode;
- (id)_landscapeComplicationsForGamingMode;
- (id)init;
- (id)_landscapeComplicationsForExerciseMode;
- (id)_complicationsForSleepMode;
- (id)_complicationsForExerciseMode;
- (id)_complicationsForMindfulnessMode;
- (BOOL)_hasSignificantStocksEvents;
- (id)_complicationsForReadingMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (id)_landscapeComplicationsForReduceInterruptions;
- (id)_complicationsForPersonalMode;
- (id)_landscapeComplicationsForDrivingMode;
- (id)provideLandscapeComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)_landscapeComplicationsForSleepMode;
- (id)_landscapeComplicationsForReadingMode;
- (void)_addSystemSmallWidgetWithExtension:(id)a0 kind:(id)a1 container:(id)a2 score:(double)a3 to:(id)a4;
- (BOOL)_hasSignificantRemindersEvents;
- (void).cxx_destruct;
- (id)_complicationsForReduceInterruptions;
- (id)_complicationsForWorkMode;

@end
