@class NSString;

@interface INGetIntentParameterOptionsForwardingAction : INIntentForwardingAction

@property (readonly, nonatomic) NSString *parameterName;
@property (readonly, nonatomic) NSString *searchTerm;

+ (Class)responseClass;
+ (BOOL)supportsSecureCoding;

- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id /* block */)_completionHandlerWithActionCompletionHandler:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIntent:(id)a0 parameterName:(id)a1 searchTerm:(id)a2;

@end
