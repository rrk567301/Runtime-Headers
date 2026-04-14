@interface HMDBackgroundOperationAccessoryManagerDataSource : HMDBackgroundOperationManagerDataSource

+ (id)name;

- (id)initWithOperationManager:(id)a0 notificationCenter:(id)a1;
- (id)values;
- (void)_handleAccessoryIsReachable:(id)a0;
- (void)dealloc;

@end
