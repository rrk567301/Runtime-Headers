@interface MAAutoAssetSuspendResumeForSoftwareUpdateInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)newServerMessageClasses:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)summary;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
