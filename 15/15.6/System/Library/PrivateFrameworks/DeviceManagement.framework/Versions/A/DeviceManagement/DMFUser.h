@class NSString;

@interface DMFUser : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, nonatomic) unsigned long long dataQuota;
@property (readonly, nonatomic) unsigned long long dataUsed;
@property (readonly, nonatomic) char hasDataToSync;
@property (readonly, nonatomic) char isCurrentUser;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUsername:(id)a0 dataQuota:(unsigned long long)a1 dataUsed:(unsigned long long)a2 hasDataToSync:(char)a3 isCurrentUser:(char)a4;

@end
