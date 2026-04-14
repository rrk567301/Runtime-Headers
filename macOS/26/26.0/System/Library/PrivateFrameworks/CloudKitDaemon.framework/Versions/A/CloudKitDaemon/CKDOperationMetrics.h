@class NSArray, NSString, NSSet, NSMutableSet, NSDate, NSMutableArray, NSMutableDictionary;

@interface CKDOperationMetrics : NSObject <MMCSOperationMetric, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *ranges;
@property (retain) NSDate *startDate;
@property double duration;
@property (retain) NSMutableSet *requestUUIDs;
@property double queueing;
@property double executing;
@property unsigned long long bytesUploaded;
@property unsigned long long bytesDownloaded;
@property unsigned long long connections;
@property unsigned long long connectionsCreated;
@property unsigned long long bytesFulfilledByPeers;
@property unsigned long long bytesFulfilledLocally;
@property unsigned long long networkServiceType;
@property unsigned long long bytesResumed;
@property unsigned long long recordsUploaded;
@property unsigned long long recordsDownloaded;
@property unsigned long long recordsDeleted;
@property unsigned long long assetsUploaded;
@property unsigned long long assetsUploadedFileSize;
@property unsigned long long assetsDownloaded;
@property unsigned long long assetsDownloadedFileSize;
@property unsigned long long requestCount;
@property unsigned long long retries;
@property BOOL walrusEnabled;
@property unsigned long long zoneishKeysRolled;
@property unsigned long long perRecordKeysRolled;
@property unsigned long long zoneKeysRolled;
@property unsigned long long shareKeysRolled;
@property unsigned long long keyRollsSkippedBySizeCheck;
@property unsigned long long zoneKeysRemoved;
@property unsigned long long zoneishKeysRemoved;
@property unsigned long long recordKeysRemoved;
@property unsigned long long keysNotRemoved;
@property unsigned long long adopterCapabilityCheckValidationFailures;
@property (retain) NSString *adopterCapabilityCheckValidationFailureTypes;
@property unsigned long long adopterCapabilityCheckResult;
@property unsigned long long requiredFeatureSetValidationFailures;
@property (retain) NSString *requiredFeatureSetValidationFailureTypes;
@property (retain) NSSet *zoneIDs;
@property (retain, nonatomic) NSMutableDictionary *requestOperationCountsByType;
@property (retain, nonatomic) NSMutableDictionary *totalBytesByChunkProfile;
@property (retain, nonatomic) NSMutableDictionary *chunkCountByChunkProfile;
@property (retain, nonatomic) NSMutableDictionary *fileCountByChunkProfile;
@property (readonly) NSArray *rangesCopy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)makeAdopterCapabilityCheckResultWithIsSupported:(BOOL)a0 isOwner:(BOOL)a1 isUsageStingraySigned:(BOOL)a2 isCapabilitiesStingraySigned:(BOOL)a3 isUsageManateeSigned:(BOOL)a4 isCapabilitiesManateeSigned:(BOOL)a5 isKTValidated:(BOOL)a6;
+ (id)mergeUniquedCommaSeparatedString:(id)a0 with:(id)a1;
+ (unsigned long long)mergeAdopterCapabilityCheckResult:(unsigned long long)a0 with:(unsigned long long)a1;

- (void)addAdopterCapabilityCheckResult:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (void)mergeAdopterCapabilityCheckValidationFailureTypes:(id)a0;
- (id)init;
- (id)newRangeWithOperationState:(unsigned long long)a0 startDate:(id)a1 duration:(double)a2;
- (void)mergeRequiredFeatureSetValidationFailureTypes:(id)a0;
- (id)_initWithStartDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAdopterCapabilityCheckValidationFailure:(id)a0;
- (void)addCKSpecificMetricsFromMetrics:(id)a0;
- (void)addRequiredFeatureSetValidationFailure:(id)a0;
- (void)addRange:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addRequestOperationCountsByOperationType:(id)a0;
- (void).cxx_destruct;

@end
