@class NSArray, NSDictionary, AMSBagKeySet, NSDate, NSString, AMSProcessInfo;

@interface AMSBagFrozenDataSourceBuilder : NSObject

@property (retain) AMSBagKeySet *bagKeySet;
@property (retain) NSArray *cookies;
@property (retain) NSDictionary *data;
@property (retain) NSDate *expirationDate;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;
@property (retain) AMSProcessInfo *processInfo;

- (void).cxx_destruct;
- (id)initWithFrozenDataSource:(id)a0;
- (id)createFrozenDataSource;

@end
