@interface WFAppleIntelligenceAvailabilityProvider : NSObject

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isAppleIntelligenceEnabled;
- (BOOL)isAppleIntelligenceAvailable;
- (BOOL)isAppleIntelligenceOptedIn;

@end
