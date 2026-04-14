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

- (BOOL)_hasTVInterest;
- (id)_landscapeComplicationsForGamingMode;
- (id)_landscapeComplicationsForExerciseMode;
- (id)_complicationsForWorkMode;
- (void)_addComplicationWithFamily:(long long)a0 extension:(id)a1 kind:(id)a2 container:(id)a3 score:(double)a4 to:(id)a5;
- (id)_landscapeComplicationsForWorkMode;
- (id)provideComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)_complicationsForGamingMode;
- (id)_complicationsForSleepMode;
- (id)provideLandscapeComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)_landscapeComplicationsForReduceInterruptions;
- (id)_complicationsForExerciseMode;
- (void).cxx_destruct;
- (id)_landscapeComplicationsForMindfulnessMode;
- (id)_complicationsForReduceInterruptions;
- (id)_landscapeComplicationsForDrivingMode;
- (id)_landscapeComplicationsForReadingMode;
- (BOOL)_hasSignificantRemindersEvents;
- (void)_addSystemSmallWidgetWithExtension:(id)a0 kind:(id)a1 container:(id)a2 score:(double)a3 to:(id)a4;
- (id)_complicationsForReadingMode;
- (id)init;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (id)_complicationsForPersonalMode;
- (id)_landscapeComplicationsForSleepMode;
- (id)_complicationsForMindfulnessMode;
- (id)_complicationsForDrivingMode;
- (BOOL)_hasSignificantStocksEvents;
- (id)_landscapeComplicationsForPersonalMode;

@end
