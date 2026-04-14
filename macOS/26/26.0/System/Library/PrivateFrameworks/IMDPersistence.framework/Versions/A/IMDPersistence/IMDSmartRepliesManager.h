@class NSString;

@interface IMDSmartRepliesManager : NSObject <IMDIndexingIntegration>

@property (readonly, nonatomic) BOOL isIntegrationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)messageIndexingJobWithSize:(long long)a0 context:(id)a1 timingCollection:(id)a2;

@end
