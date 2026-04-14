@class NSString;

@interface SPUISICloudDriveUtilities : NSObject

@property (class, nonatomic, readonly) NSString *icloudDriveBundleId_objc;

+ (id)filterResultsForAccounts;
+ (id)searchICloudDriveRelatedSearchResultWithQueryContext:(id)a0 query:(id)a1 queryId:(unsigned long long)a2;
+ (BOOL)isLoggedIntoICloudDrive;
+ (id)searchICloudDriveCommandWithQuery:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
