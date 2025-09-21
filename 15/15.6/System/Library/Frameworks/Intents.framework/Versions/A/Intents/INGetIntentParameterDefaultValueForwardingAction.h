@class NSString;

@interface INGetIntentParameterDefaultValueForwardingAction : INIntentForwardingAction

@property (readonly, copy, nonatomic) NSString *parameterName;

+ (char)supportsSecureCoding;
+ (Class)responseClass;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)_completionHandlerWithActionCompletionHandler:(id /* block */)a0;
- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (char)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIntent:(id)a0 parameterName:(id)a1;

@end
