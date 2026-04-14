@class HMDBackgroundOperationManager, NSString, NSDictionary, NSNotificationCenter;

@interface HMDBackgroundOperationManagerDataSource : HMFObject

@property (class, readonly) NSString *name;

@property (readonly, weak) HMDBackgroundOperationManager *owner;
@property (readonly, copy) NSDictionary *values;
@property (readonly) NSNotificationCenter *notificationCenter;

- (id)initWithOperationManager:(id)a0 notificationCenter:(id)a1;
- (void).cxx_destruct;
- (id)initWithOperationManager:(id)a0;
- (void)notifyDataSourceChanged;

@end
