@class NSUUID, NSString;

@interface DMFControlGroupIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *organizationUUID;
@property (readonly, nonatomic) unsigned short groupID;
@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOrganizationUUID:(id)a0 groupID:(unsigned short)a1;
- (char)isEqualToGroupIdentifier:(id)a0;

@end
