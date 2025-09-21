@class TRIRolloutIdentifiers, TRIExperimentIdentifiers;

@interface _PSFTZKWTrialData : NSObject <NSCopying>

@property (copy, nonatomic) TRIExperimentIdentifiers *experimentIdentifiers;
@property (copy, nonatomic) TRIRolloutIdentifiers *rolloutIdentifiers;
@property (nonatomic) char structuredCalendarIsEnabled;
@property (nonatomic) long long structuredCalendarDefaultConfidenceCategory;
@property (nonatomic) char unstructuredCalendarIsEnabled;
@property (nonatomic) long long unstructuredCalendarDefaultConfidenceCategory;
@property (nonatomic) char unstructuredRemindersIsEnabled;
@property (nonatomic) long long unstructuredRemindersDefaultConfidenceCategory;
@property (nonatomic) char primaryInteractionsIsEnabled;
@property (nonatomic) long long primaryInteractionsDefaultConfidenceCategory;
@property (nonatomic) long long primaryInteractionsModelType;
@property (nonatomic) char fallbackInteractionsIsEnabled;
@property (nonatomic) long long fallbackInteractionsDefaultConfidenceCategory;
@property (nonatomic) long long fallbackInteractionsModelType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
