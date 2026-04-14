@class NSNumber;

@interface STUserID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSNumber *dsid;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDSID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToUserID:(id)a0;

@end
