@class NSString;

@interface INGetIntentParameterDefaultValueForwardingAction : INIntentForwardingAction

@property (readonly, copy, nonatomic) NSString *parameterName;

+ (Class)responseClass;
+ (BOOL)supportsSecureCoding;

- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIntent:(id)a0 parameterName:(id)a1;
- (id /* block */)_completionHandlerWithActionCompletionHandler:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;

@end
