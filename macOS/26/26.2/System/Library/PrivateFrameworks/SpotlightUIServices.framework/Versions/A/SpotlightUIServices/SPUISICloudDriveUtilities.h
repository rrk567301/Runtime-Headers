@class NSString;

@interface SPUISICloudDriveUtilities : NSObject

@property (class, nonatomic, readonly) NSString *icloudDriveBundleId_objc;

+ (id)filterResultsForAccounts;
+ (id)searchICloudDriveRelatedSearchResultWithQueryContext:(id)a0 query:(id)a1 queryId:(unsigned long long)a2;
+ (BOOL)isLoggedIntoICloudDrive;
+ (id)searchICloudDriveCommandWithQuery:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
