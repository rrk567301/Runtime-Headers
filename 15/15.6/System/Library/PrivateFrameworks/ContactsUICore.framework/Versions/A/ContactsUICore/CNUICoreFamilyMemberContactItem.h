@class NSString, NSData;

@interface CNUICoreFamilyMemberContactItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSString *formattedName;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) char isUnreachable;
@property (readonly, nonatomic) char isProposed;
@property (readonly, nonatomic) long long contactType;
@property (readonly, nonatomic) long long whitelistStatus;
@property (readonly, nonatomic) char hasBeenPersisted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContactIdentifier:(id)a0;
- (id)initWithContactIdentifier:(id)a0 formattedName:(id)a1 imageData:(id)a2 isUnreachable:(char)a3 isProposed:(char)a4 contactType:(long long)a5 whitelistStatus:(long long)a6 hasBeenPersisted:(char)a7;

@end
