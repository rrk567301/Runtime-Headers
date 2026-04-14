@class NSString;

@interface WFForEachRepeatAction : WFRepeatAction {
    unsigned long long _numberOfLoops;
}

@property (readonly, nonatomic) NSString *itemVariableName;

- (unsigned long long)numberOfLoops;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (id)outputVariableWithVariableProvider:(id)a0 UUIDProvider:(id)a1;
- (BOOL)shouldRepeatWithVariableSource:(id)a0;
- (id)repeatCollectionWithVariableSource:(id)a0;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (void)setRepeatCollection:(id)a0 withVariableSource:(id)a1;

@end
