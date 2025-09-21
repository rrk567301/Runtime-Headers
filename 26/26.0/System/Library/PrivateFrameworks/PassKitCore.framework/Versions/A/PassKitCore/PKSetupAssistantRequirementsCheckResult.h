@class NSString;

@interface PKSetupAssistantRequirementsCheckResult : NSObject

@property (nonatomic, readonly) BOOL shouldRun;
@property (nonatomic, readonly) unsigned long long missingRequirements;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
