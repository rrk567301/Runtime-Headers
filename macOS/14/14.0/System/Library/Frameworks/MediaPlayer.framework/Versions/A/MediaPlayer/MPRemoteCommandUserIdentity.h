@class MRUserIdentity;

@interface MPRemoteCommandUserIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MRUserIdentity *mediaRemoteUserIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithMediaRemoteUserIdentity:(id)a0;

@end
