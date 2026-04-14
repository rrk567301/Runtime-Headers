@class NSString;
@protocol AKAppleIDProximityAuthenticationContextDelegate;

@interface AKAppleIDProximityAuthenticationContext : AKAppleIDAuthenticationInAppContext

@property (nonatomic) id /* block */ proximityAIDAHandler;
@property (weak, nonatomic) id<AKAppleIDProximityAuthenticationContextDelegate> proxDelegate;
@property (copy, nonatomic) NSString *secondaryButtonTitle;

- (void).cxx_destruct;
- (id)init;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;

@end
