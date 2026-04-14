@class NSString, _MRAppEntityPathProtobuf;

@interface MRAppEntityPath : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (copy, nonatomic) NSString *instanceIdentifier;
@property (readonly, nonatomic) _MRAppEntityPathProtobuf *protobuf;

- (id)initWithProtobuf:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 typeIdentifier:(id)a1 instanceIdentifier:(id)a2;

@end
