@class NSString, NSArray;

@interface CNSocialProfile : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *urlString;
@property (copy) NSString *username;
@property (copy) NSString *userIdentifier;
@property (copy) NSString *service;
@property (copy) NSString *displayname;
@property (copy) NSString *teamIdentifier;
@property (copy) NSArray *bundleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedStringForKey:(id)a0;
+ (id /* block */)Username;
+ (id)localizedStringForService:(id)a0;
+ (id)socialProfileWithDictionaryRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)isValid:(id *)a0;
- (id)initWithUrlString:(id)a0 username:(id)a1 userIdentifier:(id)a2 service:(id)a3 displayname:(id)a4;
- (id)initWithUrlString:(id)a0 username:(id)a1 userIdentifier:(id)a2 service:(id)a3;
- (id)initWithUrlString:(id)a0 username:(id)a1 userIdentifier:(id)a2 service:(id)a3 displayname:(id)a4 teamIdentifier:(id)a5 bundleIdentifiers:(id)a6;
- (char)isEqual:(id)a0 ignoreURLs:(char)a1;

@end
