@interface HMDBackgroundOperationAccessoryManagerDataSource : HMDBackgroundOperationManagerDataSource

+ (id)name;

- (id)values;
- (void)dealloc;
- (void)_handleAccessoryIsReachable:(id)a0;
- (id)initWithOperationManager:(id)a0 notificationCenter:(id)a1;

@end
