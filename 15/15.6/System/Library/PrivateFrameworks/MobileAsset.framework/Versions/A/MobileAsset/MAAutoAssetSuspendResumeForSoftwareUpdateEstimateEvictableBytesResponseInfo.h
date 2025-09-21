@interface MAAutoAssetSuspendResumeForSoftwareUpdateEstimateEvictableBytesResponseInfo : MAAutoAssetSuspendResumeForSoftwareUpdateResponseInfo

@property (readonly, nonatomic) unsigned long long estimatedEvictableBytes;

+ (char)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithEstimatedEvictableBytes:(unsigned long long)a0;

@end
