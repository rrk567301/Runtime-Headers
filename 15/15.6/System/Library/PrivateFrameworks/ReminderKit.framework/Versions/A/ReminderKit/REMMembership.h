@class NSUUID, NSDate;

@interface REMMembership : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *memberIdentifier;
@property (readonly, nonatomic) NSUUID *groupIdentifier;
@property (readonly, nonatomic) char isObsolete;
@property (readonly, nonatomic) NSDate *modifiedOn;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMemberIdentifier:(id)a0 groupIdentifier:(id)a1 isObsolete:(char)a2 modifiedOn:(id)a3;

@end
