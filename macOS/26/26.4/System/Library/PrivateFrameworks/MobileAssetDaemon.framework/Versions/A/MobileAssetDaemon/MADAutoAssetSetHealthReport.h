@class NSString, NSError, NSDate;

@interface MADAutoAssetSetHealthReport : NSObject

@property (retain) NSString *setIdentifier;
@property (retain) NSString *latestDiscoveredAssetSetUUID;
@property (retain) NSString *latestToVendAssetSetUUID;
@property (retain) NSDate *LastCheckedDate;
@property BOOL lastestToVendIsLocked;
@property BOOL lastestToVendMatchesSetConfig;
@property (retain) NSError *availableForUseError;
@property (retain) NSError *newerVersionError;
@property BOOL latestInstanceFromPreSUStaging;
@property (retain) NSDate *configurationChangedDate;
@property (retain) NSDate *reportTime;

+ (id)bucketedTimeSinceDate:(id)a0;
+ (id)errorSummaryForSplunk:(id)a0;
+ (id)formattedDate:(id)a0;
+ (id)shortUUID:(id)a0;
+ (id)trimmedSetIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)eventPayloadForCoreAnalytics;
- (id)eventPayloadForSplunk;

@end
