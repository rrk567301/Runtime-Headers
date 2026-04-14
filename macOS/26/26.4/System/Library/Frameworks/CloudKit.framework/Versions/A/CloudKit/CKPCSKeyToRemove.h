@class NSData;

@interface CKPCSKeyToRemove : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long keyType;
@property (readonly, nonatomic) NSData *pcsKeyID;

- (id)initInternal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyID:(id)a0 keyType:(long long)a1;

@end
