@class NSDictionary, WFActionDefinition, INStringLocalizer;
@protocol WFActionProviderDelegate;

@interface WFActionProvider : NSObject

@property (weak, nonatomic) id<WFActionProviderDelegate> delegate;
@property (retain, nonatomic) INStringLocalizer *stringLocalizer;
@property (readonly, nonatomic) WFActionDefinition *defaultActionDefinition;
@property (readonly, nonatomic) NSDictionary *defaultSerializedParameters;

- (void).cxx_destruct;
- (id)providerName;
- (void)createActionsForRequests:(id)a0;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)a0 forceLocalActionsOnly:(BOOL)a1;
- (id)createAllAvailableActions;
- (id)definitionForMissingActionWithSerializedParameters:(id)a0;

@end
