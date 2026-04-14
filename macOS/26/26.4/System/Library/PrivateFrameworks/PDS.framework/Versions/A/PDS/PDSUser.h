@class NSString;

@interface PDSUser : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *userID;
@property (readonly, nonatomic) char userType;

+ (id)userWithDSID:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToUser:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithUserID:(id)a0 userType:(char)a1;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
