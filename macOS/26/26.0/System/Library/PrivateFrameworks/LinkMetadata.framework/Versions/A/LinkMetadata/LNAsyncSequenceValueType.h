@class LNValueType;

@interface LNAsyncSequenceValueType : LNValueType

@property (readonly, nonatomic) long long capabilities;
@property (readonly, copy, nonatomic) LNValueType *memberValueType;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMemberValueType:(id)a0 capabilities:(long long)a1;

@end
