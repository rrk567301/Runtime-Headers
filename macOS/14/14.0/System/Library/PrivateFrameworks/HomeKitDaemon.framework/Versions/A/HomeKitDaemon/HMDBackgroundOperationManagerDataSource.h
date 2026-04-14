@class NSString, NSDictionary, HMDBackgroundOperationManager;

@interface HMDBackgroundOperationManagerDataSource : HMFObject

@property (class, readonly) NSString *name;

@property (readonly, weak) HMDBackgroundOperationManager *owner;
@property (readonly, copy) NSDictionary *values;

- (void).cxx_destruct;
- (id)initWithOperationManager:(id)a0;
- (void)notifyDataSourceChanged;

@end
