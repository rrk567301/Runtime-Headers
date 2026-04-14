@class NSDictionary, NSDate;

@interface CKMetric : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *startDate;
@property double duration;
@property double queueing;
@property double executing;
@property unsigned long long bytesUploaded;
@property unsigned long long bytesDownloaded;
@property unsigned long long connections;
@property unsigned long long connectionsCreated;
@property (copy) NSDictionary *totalBytesByChunkProfile;
@property (copy) NSDictionary *chunkCountByChunkProfile;
@property (copy) NSDictionary *fileCountByChunkProfile;
@property BOOL walrusEnabled;
@property unsigned long long zoneishKeysRolled;
@property unsigned long long perRecordKeysRolled;
@property unsigned long long zoneKeysRolled;
@property unsigned long long shareKeysRolled;

+ (id)unionDictionary:(id)a0 with:(id)a1;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;

@end
