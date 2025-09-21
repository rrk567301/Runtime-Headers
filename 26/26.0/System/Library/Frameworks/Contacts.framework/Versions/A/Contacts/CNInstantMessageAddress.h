@class NSString, NSArray;

@interface CNInstantMessageAddress : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *username;
@property (copy) NSString *userIdentifier;
@property (copy) NSString *service;
@property (copy) NSString *teamIdentifier;
@property (copy) NSArray *bundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedStringForKey:(id)a0;
+ (id /* block */)Username;
+ (id)instantMessageAddressWithDictionaryRepresentation:(id)a0;
+ (id)localizedStringForService:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUsername:(id)a0 service:(id)a1;
- (id)initWithUsername:(id)a0 userIdentifier:(id)a1 service:(id)a2 teamIdentifier:(id)a3 bundleIdentifiers:(id)a4;

@end
