@interface MAAutoAssetSuspendResumeForSoftwareUpdateInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)newServerMessageClasses:(id)a0;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
