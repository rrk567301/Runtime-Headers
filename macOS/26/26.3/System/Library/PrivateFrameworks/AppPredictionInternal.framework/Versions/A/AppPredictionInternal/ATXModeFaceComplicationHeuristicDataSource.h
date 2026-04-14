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

- (id)_complicationsForGamingMode;
- (id)_landscapeComplicationsForReduceInterruptions;
- (id)_complicationsForReadingMode;
- (BOOL)_hasTVInterest;
- (id)_complicationsForMindfulnessMode;
- (id)_complicationsForDrivingMode;
- (id)_complicationsForReduceInterruptions;
- (id)init;
- (id)_landscapeComplicationsForWorkMode;
- (BOOL)_hasSignificantRemindersEvents;
- (id)_landscapeComplicationsForGamingMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (id)_landscapeComplicationsForExerciseMode;
- (id)_landscapeComplicationsForDrivingMode;
- (void).cxx_destruct;
- (id)_landscapeComplicationsForReadingMode;
- (id)_complicationsForExerciseMode;
- (id)_landscapeComplicationsForMindfulnessMode;
- (void)_addSystemSmallWidgetWithExtension:(id)a0 kind:(id)a1 container:(id)a2 score:(double)a3 to:(id)a4;
- (id)provideLandscapeComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)_complicationsForWorkMode;
- (BOOL)_hasSignificantStocksEvents;
- (id)provideComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)_complicationsForPersonalMode;
- (id)_landscapeComplicationsForSleepMode;
- (id)_landscapeComplicationsForPersonalMode;
- (void)_addComplicationWithFamily:(long long)a0 extension:(id)a1 kind:(id)a2 container:(id)a3 score:(double)a4 to:(id)a5;
- (id)_complicationsForSleepMode;

@end
