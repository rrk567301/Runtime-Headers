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

- (id)_landscapeComplicationsForWorkMode;
- (id)provideComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)_landscapeComplicationsForReadingMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (id)_complicationsForSleepMode;
- (id)_landscapeComplicationsForMindfulnessMode;
- (id)_landscapeComplicationsForGamingMode;
- (void)_addComplicationWithFamily:(long long)a0 extension:(id)a1 kind:(id)a2 container:(id)a3 score:(double)a4 to:(id)a5;
- (id)_complicationsForReduceInterruptions;
- (id)_complicationsForMindfulnessMode;
- (id)_landscapeComplicationsForDrivingMode;
- (BOOL)_hasSignificantRemindersEvents;
- (id)_landscapeComplicationsForReduceInterruptions;
- (id)_complicationsForDrivingMode;
- (BOOL)_hasSignificantStocksEvents;
- (id)_complicationsForWorkMode;
- (id)_complicationsForGamingMode;
- (id)provideLandscapeComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)_complicationsForPersonalMode;
- (void).cxx_destruct;
- (void)_addSystemSmallWidgetWithExtension:(id)a0 kind:(id)a1 container:(id)a2 score:(double)a3 to:(id)a4;
- (id)_complicationsForReadingMode;
- (id)_landscapeComplicationsForPersonalMode;
- (BOOL)_hasTVInterest;
- (id)_landscapeComplicationsForSleepMode;
- (id)_landscapeComplicationsForExerciseMode;
- (id)_complicationsForExerciseMode;
- (id)init;

@end
