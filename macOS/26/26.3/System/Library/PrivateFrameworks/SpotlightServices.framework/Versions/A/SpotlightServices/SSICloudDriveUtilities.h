@class NSString;

@interface SSICloudDriveUtilities : NSObject

@property (class, nonatomic, readonly) NSString *icloudDriveBundleId_objc;

+ (id)filterResultsForAccounts;
+ (id)searchICloudDriveRelatedSearchResultWithQueryContext:(id)a0 query:(id)a1 queryId:(unsigned long long)a2;
+ (id)adjustedRootURLWithRootURL:(id)a0;
+ (id)icloudDriveImage;
+ (BOOL)isLoggedIntoICloudDrive;
+ (id)rootURLS;
+ (id)rootURLSForDomain:(id)a0;
+ (id)searchICloudDriveCommandWithQuery:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
