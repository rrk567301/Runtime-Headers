@class NSArray, NSString, WFVariable, WFDateFieldParameterState;
@protocol WFPropertyListObject;

@interface WFDateIntervalParameterState : NSObject <WFParameterState, WFVariableSupportingParameterState>

@property (class, readonly, nonatomic) Class processingValueClass;
@property (class, readonly, nonatomic) NSArray *processingValueClasses;

@property (readonly, nonatomic) WFVariable *variable;
@property (readonly, nonatomic) WFDateFieldParameterState *startState;
@property (readonly, nonatomic) WFDateFieldParameterState *endState;
@property (readonly, nonatomic) NSArray *containedVariables;
@property (readonly, nonatomic) id<WFPropertyListObject> legacySerializedRepresentation;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithDateInterval:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVariable:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)substateForKey:(id)a0;
- (id)initWithStartState:(id)a0 endState:(id)a1;

@end
