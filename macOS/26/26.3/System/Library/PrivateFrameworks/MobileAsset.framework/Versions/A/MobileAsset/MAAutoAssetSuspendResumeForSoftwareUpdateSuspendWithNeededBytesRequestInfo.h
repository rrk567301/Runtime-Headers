@interface MAAutoAssetSuspendResumeForSoftwareUpdateSuspendWithNeededBytesRequestInfo : MAAutoAssetSuspendResumeForSoftwareUpdateRequestInfo

@property (readonly, nonatomic) unsigned long long neededBytes;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)summary;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWitNeededBytes:(unsigned long long)a0;

@end
