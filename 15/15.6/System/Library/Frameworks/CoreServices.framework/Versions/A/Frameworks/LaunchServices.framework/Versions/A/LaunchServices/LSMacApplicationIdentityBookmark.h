@class NSURL, NSString;

@interface LSMacApplicationIdentityBookmark : NSObject <NSCopying, NSSecureCoding> {
    NSURL *_URL;
    NSString *_bundleIdentifier;
}

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
