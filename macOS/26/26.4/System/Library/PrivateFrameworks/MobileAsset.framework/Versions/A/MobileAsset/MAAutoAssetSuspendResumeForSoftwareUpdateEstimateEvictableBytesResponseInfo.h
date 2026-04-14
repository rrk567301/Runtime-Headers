@interface MAAutoAssetSuspendResumeForSoftwareUpdateEstimateEvictableBytesResponseInfo : MAAutoAssetSuspendResumeForSoftwareUpdateResponseInfo

@property (readonly, nonatomic) unsigned long long estimatedEvictableBytes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithEstimatedEvictableBytes:(unsigned long long)a0;

@end
