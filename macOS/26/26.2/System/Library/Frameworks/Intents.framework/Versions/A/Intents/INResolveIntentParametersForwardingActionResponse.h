@class NSDictionary, INIntent;

@interface INResolveIntentParametersForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic, getter=isSuccess) BOOL success;
@property (readonly, nonatomic) INIntent *updatedIntent;
@property (readonly, nonatomic) NSDictionary *parameterResolutionResults;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0 updatedIntent:(id)a1 parameterResolutionResults:(id)a2 error:(id)a3;

@end
