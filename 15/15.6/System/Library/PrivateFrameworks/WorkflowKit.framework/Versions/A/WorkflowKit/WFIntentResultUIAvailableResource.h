@class INIntentDescriptor;

@interface WFIntentResultUIAvailableResource : WFResource

@property (readonly, nonatomic) INIntentDescriptor *resolvedIntentDescriptor;
@property (readonly, nonatomic) char hasSuccessResponseWithDialog;

+ (char)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)initWithDefinition:(id)a0 resolvedIntentDescriptor:(id)a1 hasSuccessResponseWithDialog:(char)a2;
- (void)refreshAvailability;

@end
