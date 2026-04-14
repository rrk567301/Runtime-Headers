@class NSDictionary, NSString, NSDate;

@interface CKMetric : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double queueing;
@property (readonly, nonatomic) double executing;
@property (readonly, nonatomic) unsigned long long bytesUploaded;
@property (readonly, nonatomic) unsigned long long bytesDownloaded;
@property (readonly, nonatomic) unsigned long long networkServiceType;
@property (readonly, nonatomic) unsigned long long connections;
@property (readonly, nonatomic) unsigned long long connectionsCreated;
@property (readonly, nonatomic) unsigned long long bytesFulfilledByPeers;
@property (readonly, nonatomic) unsigned long long bytesFulfilledLocally;
@property (readonly, nonatomic) unsigned long long bytesResumed;
@property (readonly, copy, nonatomic) NSDictionary *totalBytesByChunkProfile;
@property (readonly, copy, nonatomic) NSDictionary *chunkCountByChunkProfile;
@property (readonly, copy, nonatomic) NSDictionary *fileCountByChunkProfile;
@property (readonly, nonatomic) BOOL walrusEnabled;
@property (readonly, nonatomic) unsigned long long zoneishKeysRolled;
@property (readonly, nonatomic) unsigned long long perRecordKeysRolled;
@property (readonly, nonatomic) unsigned long long zoneKeysRolled;
@property (readonly, nonatomic) unsigned long long shareKeysRolled;
@property (readonly, nonatomic) unsigned long long keyRollsSkippedBySizeCheck;
@property (readonly, nonatomic) unsigned long long zoneKeysRemoved;
@property (readonly, nonatomic) unsigned long long zoneishKeysRemoved;
@property (readonly, nonatomic) unsigned long long recordKeysRemoved;
@property (readonly, nonatomic) unsigned long long keysNotRemoved;
@property (readonly, nonatomic) unsigned long long adopterCapabilityCheckValidationFailures;
@property (readonly, copy, nonatomic) NSString *adopterCapabilityCheckValidationFailureTypes;
@property (readonly, nonatomic) unsigned long long adopterCapabilityCheckResult;
@property (readonly, nonatomic) unsigned long long requiredFeatureSetValidationFailures;
@property (readonly, copy, nonatomic) NSString *requiredFeatureSetValidationFailureTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 duration:(double)a1 queueing:(double)a2 executing:(double)a3 bytesUploaded:(unsigned long long)a4 bytesDownloaded:(unsigned long long)a5 networkServiceType:(unsigned long long)a6 connections:(unsigned long long)a7 connectionsCreated:(unsigned long long)a8 bytesFulfilledByPeers:(unsigned long long)a9 bytesFulfilledLocally:(unsigned long long)a10 bytesResumed:(unsigned long long)a11 totalBytesByChunkProfile:(id)a12 chunkCountByChunkProfile:(id)a13 fileCountByChunkProfile:(id)a14 walrusEnabled:(BOOL)a15 zoneishKeysRolled:(unsigned long long)a16 perRecordKeysRolled:(unsigned long long)a17 zoneKeysRolled:(unsigned long long)a18 shareKeysRolled:(unsigned long long)a19 keyRollsSkippedBySizeCheck:(unsigned long long)a20 zoneKeysRemoved:(unsigned long long)a21 zoneishKeysRemoved:(unsigned long long)a22 recordKeysRemoved:(unsigned long long)a23 keysNotRemoved:(unsigned long long)a24 adopterCapabilityCheckValidationFailures:(unsigned long long)a25 adopterCapabilityCheckValidationFailureTypes:(id)a26 adopterCapabilityCheckResult:(unsigned long long)a27 requiredFeatureSetValidationFailures:(unsigned long long)a28 requiredFeatureSetValidationFailureTypes:(id)a29;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
