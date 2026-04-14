@interface MAAutoAssetSuspendResumeForSoftwareUpdateEstimateEvictableBytesResponseInfo : MAAutoAssetSuspendResumeForSoftwareUpdateResponseInfo

@property (readonly, nonatomic) unsigned long long estimatedEvictableBytes;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)summary;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEstimatedEvictableBytes:(unsigned long long)a0;

@end
