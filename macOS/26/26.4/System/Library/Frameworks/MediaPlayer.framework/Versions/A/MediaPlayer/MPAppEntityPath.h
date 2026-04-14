@class NSString, MRAppEntityPath;

@interface MPAppEntityPath : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MRAppEntityPath *mediaRemoteAppEntityPath;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, copy, nonatomic) NSString *instanceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 typeIdentifier:(id)a1 instanceIdentifier:(id)a2;
- (id)initWithMediaRemoteAppEntityPath:(id)a0;

@end
