@class AKAppleIDAuthenticationController, AKAgeRangeSettingsCache;

@interface AKAgeRangeSettingsProvider : NSObject

@property (retain, nonatomic) AKAppleIDAuthenticationController *authController;
@property (readonly, nonatomic) AKAgeRangeSettingsCache *ageRangeCache;

- (id)init;
- (void).cxx_destruct;
- (void)refreshAgeRangeWithCompletion:(id /* block */)a0;

@end
