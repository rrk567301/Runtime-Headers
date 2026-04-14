@interface MAAutoAssetSuspendResumeForSoftwareUpdateEstimateEvictableBytesResponseInfo : MAAutoAssetSuspendResumeForSoftwareUpdateResponseInfo

@property (readonly, nonatomic) unsigned long long estimatedEvictableBytes;

+ (BOOL)supportsSecureCoding;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithEstimatedEvictableBytes:(unsigned long long)a0;

@end
