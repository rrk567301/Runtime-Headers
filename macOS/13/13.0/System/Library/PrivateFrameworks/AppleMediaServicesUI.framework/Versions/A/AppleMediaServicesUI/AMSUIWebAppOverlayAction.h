@class NSString, AMSPromise;

@interface AMSUIWebAppOverlayAction : AMSUIWebAction

@property BOOL dismiss;
@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) NSString *campaignToken;
@property (retain, nonatomic) NSString *providerToken;
@property (retain, nonatomic) NSString *customProductPageIdentifier;
@property (retain, nonatomic) NSString *latestReleaseID;
@property (retain, nonatomic) AMSPromise *presentationPromise;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)runAction;
- (void)_finishPromiseWithSuccess:(BOOL)a0 error:(id)a1;

@end
