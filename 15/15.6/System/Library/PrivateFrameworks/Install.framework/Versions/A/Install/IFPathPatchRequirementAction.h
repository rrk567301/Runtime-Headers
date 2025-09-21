@interface IFPathPatchRequirementAction : IFPathAction

+ (id)types;

- (id)type;
- (char)evaluateActionOnNode:(id)a0 fromPlan:(id)a1 withSearchContext:(id)a2 atTarget:(id)a3 returningError:(id *)a4;

@end
