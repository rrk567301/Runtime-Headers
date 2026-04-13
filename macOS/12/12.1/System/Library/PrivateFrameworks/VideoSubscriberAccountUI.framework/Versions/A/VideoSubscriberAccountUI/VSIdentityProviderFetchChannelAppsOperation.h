@class NSOperationQueue, VSOptional, NSString;

@interface VSIdentityProviderFetchChannelAppsOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) NSString *identityProviderID;
@property (nonatomic) BOOL shouldFetchImages;
@property (nonatomic) BOOL shouldPrecomposeIcon;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithProviderIdentifier:(id)a0;

@end
