@interface MAAutoAssetSuspendResumeForSoftwareUpdateSuspendWithNeededBytesRequestInfo : MAAutoAssetSuspendResumeForSoftwareUpdateRequestInfo

@property (readonly, nonatomic) unsigned long long neededBytes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWitNeededBytes:(unsigned long long)a0;

@end
