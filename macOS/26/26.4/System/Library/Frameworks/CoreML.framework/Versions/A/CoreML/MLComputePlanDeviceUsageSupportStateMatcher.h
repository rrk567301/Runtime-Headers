@class NSArray;

@interface MLComputePlanDeviceUsageSupportStateMatcher : NSObject

@property (readonly, nonatomic) NSArray *supportStatePatterns;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (long long)matchingSupportStateForValidationMessage:(id)a0;

@end
