@interface MAAutoAssetSuspendResumeForSoftwareUpdateStatusResponseInfo : MAAutoAssetSuspendResumeForSoftwareUpdateResponseInfo

@property (readonly, nonatomic) long long status;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithStatus:(long long)a0;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
