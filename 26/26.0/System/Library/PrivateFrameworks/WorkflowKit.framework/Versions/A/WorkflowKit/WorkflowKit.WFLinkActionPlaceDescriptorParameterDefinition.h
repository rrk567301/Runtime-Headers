@class NSString, LNValue, WFAction, NSError;
@protocol WFParameterState, WFContentPermissionRequestor;

@interface WorkflowKit.WFLinkActionPlaceDescriptorParameterDefinition : WFLinkActionEntityParameterDefinition

@property (nonatomic, readonly) Class parameterClass;

- (id)linkValueFromParameterState:(id)a0 action:(id)a1;
- (id)parameterStateFromLinkValue:(id)a0;
- (void)getLinkValueFromProcessedParameterValue:(id)a0 parameterState:(id<WFParameterState>)a1 permissionRequestor:(id<WFContentPermissionRequestor>)a2 runningFromToolKit:(BOOL)a3 action:(WFAction *)a4 parameterKey:(NSString *)a5 completionHandler:(void (^)(LNValue *, NSError *))a6;
- (id)initWithParameterMetadata:(id)a0;

@end
