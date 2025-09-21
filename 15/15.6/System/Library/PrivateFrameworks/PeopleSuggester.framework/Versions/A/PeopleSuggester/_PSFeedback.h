@class _PSPredictionContext, NSArray, NSString, _PSFeedbackAction;

@interface _PSFeedback : NSObject

@property (nonatomic) char dryRun;
@property (readonly, nonatomic) _PSFeedbackAction *action;
@property (readonly, nonatomic) unsigned long long indexOfEngagedSuggestion;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) _PSPredictionContext *context;
@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) float numberOfVisibleSuggestions;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) char isAirDropEvent;
@property (readonly, nonatomic) char wasAirDropShown;

+ (id)feedbackForAction:(id)a0 delay:(double)a1 context:(id)a2 suggestions:(id)a3 numberOfVisibleSuggestions:(float)a4 sessionIdentifier:(id)a5;
+ (id)feedbackForActionWithAirdrop:(id)a0 delay:(double)a1 context:(id)a2 suggestions:(id)a3 numberOfVisibleSuggestions:(float)a4 sessionIdentifier:(id)a5 isAirDropEvent:(char)a6 wasAirDropShown:(char)a7;

- (void).cxx_destruct;
- (void)donateToBiome;
- (id)feedbackPayloadShowFamily:(id)a0;
- (id)getTrialID;
- (id)initWithAction:(id)a0 delay:(double)a1 context:(id)a2 suggestions:(id)a3 numberOfVisibleSuggestions:(float)a4 sessionIdentifier:(id)a5 isAirDropEvent:(char)a6 wasAirDropShown:(char)a7;

@end
