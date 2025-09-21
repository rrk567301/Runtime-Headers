@interface HDCloudSyncValidateSubscriptionsOperation : HDCloudSyncOperation

@property (nonatomic) char includeSecondaryContainers;

+ (char)shouldLogAtOperationStart;

- (void)main;

@end
