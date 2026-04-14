@class NSString, NSNumber;

@interface AMSAccountIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *altDSID;
@property (readonly) NSNumber *dsid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDSID:(id)a0 altDSID:(id)a1;

@end
