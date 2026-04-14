@class NSString, NSArray;

@interface ABCNInstantMessageAddress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;
@property (readonly, copy, nonatomic) NSArray *bundleIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithUsername:(id)a0 service:(id)a1;
- (id)initWithUsername:(id)a0 service:(id)a1 userIdentifier:(id)a2 bundleIdentifiers:(id)a3 teamIdentifier:(id)a4;

@end
