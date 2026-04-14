@class AKAppleIDAuthenticationController, AKAgeRangeSettingsCache;

@interface AKAgeRangeSettingsProvider : NSObject

@property (retain, nonatomic) AKAppleIDAuthenticationController *authController;
@property (readonly, nonatomic) AKAgeRangeSettingsCache *ageRangeCache;

- (void).cxx_destruct;
- (id)init;
- (void)refreshAgeRangeWithCompletion:(id /* block */)a0;

@end
