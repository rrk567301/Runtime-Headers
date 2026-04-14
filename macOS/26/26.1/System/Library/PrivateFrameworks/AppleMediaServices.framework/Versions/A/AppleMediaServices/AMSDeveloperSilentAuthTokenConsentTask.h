@class NSString, ACAccount;
@protocol AMSBagProtocol;

@interface AMSDeveloperSilentAuthTokenConsentTask : AMSTask

@property (readonly, copy) NSString *bundleId;
@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) NSString *mediaType;

- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 account:(id)a1 bag:(id)a2;
- (id)initWithBundleId:(id)a0 account:(id)a1 mediaType:(id)a2 bag:(id)a3;
- (id)performPresentation;

@end
