@class NSURL, HMFDigest, NSUUID;

@interface HMSoftwareUpdateDocumentationMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSURL *URL;
@property (readonly, copy) HMFDigest *digest;
@property (readonly, copy) NSUUID *metadataDigestUUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 digest:(id)a1;

@end
