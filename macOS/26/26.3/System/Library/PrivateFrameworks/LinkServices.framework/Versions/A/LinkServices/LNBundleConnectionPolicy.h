@class NSString;

@interface LNBundleConnectionPolicy : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *processInstanceIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)connectionWithError:(id *)a0;
- (id)connectionWithUserIdentity:(id)a0 error:(id *)a1;
- (id)initWithBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 processInstanceIdentifier:(id)a2;

@end
