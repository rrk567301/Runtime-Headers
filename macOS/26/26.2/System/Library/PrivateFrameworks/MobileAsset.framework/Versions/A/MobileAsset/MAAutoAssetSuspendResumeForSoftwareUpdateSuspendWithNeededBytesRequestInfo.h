@interface MAAutoAssetSuspendResumeForSoftwareUpdateSuspendWithNeededBytesRequestInfo : MAAutoAssetSuspendResumeForSoftwareUpdateRequestInfo

@property (readonly, nonatomic) unsigned long long neededBytes;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)summary;
- (id)initWitNeededBytes:(unsigned long long)a0;

@end
