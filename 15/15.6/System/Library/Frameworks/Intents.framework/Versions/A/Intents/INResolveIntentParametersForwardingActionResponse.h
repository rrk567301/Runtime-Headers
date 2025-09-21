@class NSDictionary, INIntent;

@interface INResolveIntentParametersForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic, getter=isSuccess) char success;
@property (readonly, nonatomic) INIntent *updatedIntent;
@property (readonly, nonatomic) NSDictionary *parameterResolutionResults;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuccess:(char)a0 updatedIntent:(id)a1 parameterResolutionResults:(id)a2 error:(id)a3;

@end
