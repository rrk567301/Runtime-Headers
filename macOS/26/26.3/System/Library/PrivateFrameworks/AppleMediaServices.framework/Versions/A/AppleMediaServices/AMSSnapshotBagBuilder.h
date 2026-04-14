@class NSString, NSDictionary, NSDate, AMSProcessInfo;

@interface AMSSnapshotBagBuilder : NSObject

@property (retain) NSDictionary *data;
@property (retain) NSDictionary *defaultValues;
@property (retain) NSDate *expirationDate;
@property (retain) AMSProcessInfo *processInfo;
@property (retain) NSString *profile;
@property (retain) NSString *profileVersion;

- (id)buildWithError:(id *)a0;
- (void).cxx_destruct;

@end
