@class NSString, NSSet, NSMutableDictionary, NSMutableSet, NSDate, NSMutableArray, NSArray;

@interface CKDOperationMetrics : NSObject <MMCSOperationMetric, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

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
@property char walrusEnabled;
@property unsigned long long zoneishKeysRolled;
@property unsigned long long perRecordKeysRolled;
@property unsigned long long zoneKeysRolled;
@property unsigned long long shareKeysRolled;
@property unsigned long long keyRollsSkippedBySizeCheck;
@property unsigned long long zoneKeysRemoved;
@property unsigned long long zoneishKeysRemoved;
@property unsigned long long recordKeysRemoved;
@property unsigned long long keysNotRemoved;
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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addRange:(id)a0;
- (id)CKPropertiesDescription;
- (id)newRangeWithOperationState:(unsigned long long)a0 startDate:(id)a1 duration:(double)a2;
- (id)_initWithStartDate:(id)a0;
- (void)addCKSpecificMetricsFromMetrics:(id)a0;
- (void)addRequestOperationCountsByOperationType:(id)a0;

@end
