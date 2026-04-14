@class NSString;

@interface VCSandboxedURL : NSURL <NSCopying, NSSecureCoding> {
    unsigned char _accessType;
    NSString *_urlToken;
    long long _urlTokenHandle;
    BOOL _deserialized;
    BOOL _tokenConsumed;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)deserialize:(id)a0;
+ (id)stringFromAccessType:(unsigned char)a0;

- (id)initWithCoder:(id)a0;
- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const char *)extensionClass;
- (id)description;
- (void)dealloc;
- (id)consumeToken;
- (id)initWithURL:(id)a0 accessType:(unsigned char)a1;
- (BOOL)issueSandboxExtensionForPath:(id)a0;

@end
