@class NSURL, NSString;

@interface LSMacApplicationIdentityBookmark : NSObject <NSCopying, NSSecureCoding> {
    NSURL *_URL;
    NSString *_bundleIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
