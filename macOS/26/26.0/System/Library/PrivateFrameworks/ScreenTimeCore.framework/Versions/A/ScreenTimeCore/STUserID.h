@class NSNumber;

@interface STUserID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSNumber *dsid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDSID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToUserID:(id)a0;

@end
