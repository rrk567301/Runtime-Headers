@interface HMDBackgroundOperationAccessoryManagerDataSource : HMDBackgroundOperationManagerDataSource

+ (id)name;

- (id)values;
- (void)dealloc;
- (id)initWithOperationManager:(id)a0 notificationCenter:(id)a1;
- (void)_handleAccessoryIsReachable:(id)a0;

@end
