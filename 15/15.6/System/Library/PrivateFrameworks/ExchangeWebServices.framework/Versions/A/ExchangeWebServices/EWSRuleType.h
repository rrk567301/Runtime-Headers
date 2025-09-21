@class NSString, EWSRulePredicatesType, EWSRuleActionsType;

@interface EWSRuleType : NSObject <XSDefinitionProvider>

@property (copy, nonatomic) NSString *RuleId;
@property (copy, nonatomic) NSString *DisplayName;
@property (nonatomic) long long Priority;
@property (nonatomic) char IsEnabled;
@property (nonatomic) char IsInError;
@property (retain, nonatomic) EWSRulePredicatesType *Conditions;
@property (retain, nonatomic) EWSRulePredicatesType *Exceptions;
@property (retain, nonatomic) EWSRuleActionsType *Actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
