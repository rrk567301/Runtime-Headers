@class NSUUID, CKDistributedTimestampStateVector, NSData;

@interface CKMultiValueMergeableDeltaRegisterState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *vector;
@property (readonly, nonatomic) NSData *salt;

+ (id)newSalt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 vector:(id)a1 salt:(id)a2;

@end
