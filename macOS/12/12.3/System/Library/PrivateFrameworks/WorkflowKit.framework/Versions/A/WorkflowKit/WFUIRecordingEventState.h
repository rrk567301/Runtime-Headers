@class NSString, WFUIRUserEvent;

@interface WFUIRecordingEventState : NSObject <WFParameterState>

@property (readonly, copy, nonatomic) WFUIRUserEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)processingValueClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serializedRepresentation;
- (id)initWithEvent:(id)a0;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (id)containedVariables;

@end
