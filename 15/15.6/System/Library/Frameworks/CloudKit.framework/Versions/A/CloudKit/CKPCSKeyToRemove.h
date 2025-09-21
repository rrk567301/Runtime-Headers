@class NSData;

@interface CKPCSKeyToRemove : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long keyType;
@property (readonly, nonatomic) NSData *pcsKeyID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initInternal;
- (id)initWithKeyID:(id)a0 keyType:(long long)a1;

@end
