@class NSString, NSDictionary, ACAccount, NSDate, AMSProcessInfo;

@interface AMSBagFrozenDataSourceBuilder : NSObject

@property (retain) ACAccount *account;
@property (retain) NSDictionary *data;
@property (retain) NSDictionary *defaultValues;
@property (retain) NSDate *expirationDate;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;
@property (retain) AMSProcessInfo *processInfo;

- (void).cxx_destruct;
- (id)initWithFrozenDataSource:(id)a0;
- (id)createFrozenBag;
- (id)createFrozenDataSource;

@end
