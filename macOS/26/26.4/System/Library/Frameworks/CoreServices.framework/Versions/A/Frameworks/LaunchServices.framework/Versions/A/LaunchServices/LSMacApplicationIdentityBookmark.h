@class NSURL, NSString;

@interface LSMacApplicationIdentityBookmark : NSObject <NSCopying, NSSecureCoding> {
    NSURL *_URL;
    NSString *_bundleIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;

@end
