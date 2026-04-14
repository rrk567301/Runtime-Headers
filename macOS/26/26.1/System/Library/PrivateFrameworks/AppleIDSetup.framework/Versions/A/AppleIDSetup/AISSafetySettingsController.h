@class NSError, AISSafetySettingsContext;

@interface AISSafetySettingsController : NSObject

- (id)init;
- (void)shouldPresentSafetySettingsUsingOnlyLocalChecksWithContext:(AISSafetySettingsContext *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;
- (void)shouldPresentSafetySettingsWithContext:(AISSafetySettingsContext *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;

@end
