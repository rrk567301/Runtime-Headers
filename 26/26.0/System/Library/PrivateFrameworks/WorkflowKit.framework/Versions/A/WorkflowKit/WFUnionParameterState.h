@class NSArray, NSString, NSDictionary;
@protocol WFPropertyListObject;

@interface WFUnionParameterState : NSObject <WFParameterState>

@property (class, readonly, nonatomic) Class processingValueClass;
@property (class, readonly, nonatomic) NSArray *processingValueClasses;

@property (readonly, copy, nonatomic) NSString *which;
@property (readonly, copy, nonatomic) NSDictionary *states;
@property (readonly, nonatomic) NSArray *containedVariables;
@property (readonly, nonatomic) id<WFPropertyListObject> legacySerializedRepresentation;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithWhich:(id)a0 states:(id)a1;

@end
