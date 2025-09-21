@class NSDate;

@interface MADManagedBackgroundAnalysisProgressHistory : NSManagedObject

@property (nonatomic) long long activityID;
@property (nonatomic) long long analysisSubtype;
@property (nonatomic) long long processedAssetCount;
@property (copy, nonatomic) NSDate *storeDate;
@property (nonatomic) long long totalAssetCount;
@property (nonatomic) long long version;

+ (id)fetchRequest;
+ (id)activityIDColumnName;
+ (id)analysisSubtypeColumnName;
+ (BOOL)isMACDPersistEnabled;
+ (BOOL)isMACDReadEnabled;
+ (id)processedAssetCountColumnName;
+ (id)storeDateColumnName;
+ (id)totalAssetCountColumnName;
+ (id)versionColumnName;

@end
