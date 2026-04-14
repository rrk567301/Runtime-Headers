@interface ATXActionPredictionTypes : NSObject

+ (unsigned long long)stringToActionExperience:(id)a0 found:(BOOL *)a1;
+ (id)actionTypeToString:(unsigned long long)a0;
+ (id)inverseActionFeedbackTypeMapping;
+ (unsigned long long)stringToActionFeedbackStage:(id)a0 found:(BOOL *)a1;
+ (id)actionFeedbackTypeToString:(unsigned long long)a0;
+ (id)actionFeedbackStageToString:(unsigned long long)a0;
+ (id)actionExperienceToString:(unsigned long long)a0;
+ (id)engagementTypeToString:(unsigned long long)a0;
+ (id)actionTypeToPETString:(unsigned long long)a0;

@end
