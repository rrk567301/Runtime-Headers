@class LNValueType;

@interface LNAsyncSequenceValueType : LNValueType

@property (readonly, nonatomic) long long capabilities;
@property (readonly, copy, nonatomic) LNValueType *memberValueType;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMemberValueType:(id)a0 capabilities:(long long)a1;

@end
