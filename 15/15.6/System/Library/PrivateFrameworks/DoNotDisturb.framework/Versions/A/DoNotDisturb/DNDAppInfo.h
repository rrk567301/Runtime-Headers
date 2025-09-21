@class DNDApplicationIdentifier, NSString, NSURL;

@interface DNDAppInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long source;
@property (readonly, copy, nonatomic) DNDApplicationIdentifier *applicationIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSURL *storeIconURL;
@property (readonly, copy, nonatomic) NSURL *cachedIconURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithAppInfo:(id)a0;
- (id)initWithSource:(long long)a0 applicationIdentifier:(id)a1 displayName:(id)a2 storeIconURL:(id)a3 cachedIconURL:(id)a4;

@end
