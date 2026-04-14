@interface SHKRecentServiceManager : NSObject

+ (void)addRecentEmailServiceToDefaultsWithSubject:(id)a0 recipients:(id)a1;
+ (void)addRecentServiceToDefaults:(id)a0;
+ (id)decoratedTitleForRecentServiceItem:(id)a0;
+ (id)fetchRecentServicesListFromDefaults;
+ (id)imageForRecentService:(id)a0;
+ (id)listItemFromSharingService:(id)a0;
+ (id)recentServicesForAllowedServiceIdentifiers:(id)a0 serviceWithRecipientsOnly:(BOOL)a1;
+ (void)saveRecentServicesListToDefaults:(id)a0;

@end
