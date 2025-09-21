@class CNContactFormatter, NSString, NSArray;

@interface CNContactVCardSummary : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) CNContactFormatter *defaultNameFormatter;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *descriptiveLabel;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned long long contactCount;
@property (readonly, copy, nonatomic) NSArray *avatarContacts;

+ (id)readingOptionsWithContactLimit:(unsigned long long)a0;
+ (id)nameForContact:(id)a0;
+ (char)isAvatarContacts:(id)a0 equalTo:(id)a1;
+ (id)localizedStringWithName:(id)a0 andOtherName:(id)a1;
+ (id)localizedStringWithName:(id)a0 andThisManyOthers:(unsigned long long)a1;
+ (id)makeFormatter;
+ (id)namesForContact:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 contactCount:(unsigned long long)a2 avatarContacts:(id)a3;

@end
