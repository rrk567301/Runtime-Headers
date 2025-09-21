@class NSString, NSArray;

@interface TVAppAccountStoreObjC : NSObject

@property (class, nonatomic, readonly) NSString *storefront;
@property (class, nonatomic, readonly) NSString *mediaType;
@property (class, nonatomic, readonly) NSArray *accounts;

+ (id)shared;
+ (id)activeAccount;
+ (id)localAccount;
+ (id)accountWithDSID:(id)a0;
+ (id)activeOrLocalAccount;
+ (id)activeiCloudAccountFor:(id)a0;
+ (id)activeAccountForMediaType:(id)a0;
+ (id)activeiCloudAccount;

- (id)init;

@end
