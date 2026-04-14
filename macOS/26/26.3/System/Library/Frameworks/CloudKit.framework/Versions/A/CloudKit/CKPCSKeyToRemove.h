@class NSData;

@interface CKPCSKeyToRemove : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long keyType;
@property (readonly, nonatomic) NSData *pcsKeyID;

- (id)initInternal;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeyID:(id)a0 keyType:(long long)a1;

@end
