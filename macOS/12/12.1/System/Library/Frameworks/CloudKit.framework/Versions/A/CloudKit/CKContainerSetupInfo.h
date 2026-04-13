@class CKContainerID, CKContainerOptions, CKAccountOverrideInfo;

@interface CKContainerSetupInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKContainerID *containerID;
@property (retain, nonatomic) CKContainerOptions *containerOptions;
@property (readonly, copy, nonatomic) CKAccountOverrideInfo *accountOverrideInfo;
@property (readonly, copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)hashString;

@end
