@interface FAScreenTimeWrapper : NSObject

- (void)refresh;
- (char)activityEnabledForUser;
- (char)activityEnablementChanged;
- (id)getScreenTimeUsageGraphForUser;
- (id)initWithUserDSID:(id)a0;

@end
