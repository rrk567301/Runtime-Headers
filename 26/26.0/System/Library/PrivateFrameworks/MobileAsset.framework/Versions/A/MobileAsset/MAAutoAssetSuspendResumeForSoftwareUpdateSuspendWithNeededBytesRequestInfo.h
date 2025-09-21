@interface MAAutoAssetSuspendResumeForSoftwareUpdateSuspendWithNeededBytesRequestInfo : MAAutoAssetSuspendResumeForSoftwareUpdateRequestInfo

@property (readonly, nonatomic) unsigned long long neededBytes;

+ (BOOL)supportsSecureCoding;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWitNeededBytes:(unsigned long long)a0;

@end
