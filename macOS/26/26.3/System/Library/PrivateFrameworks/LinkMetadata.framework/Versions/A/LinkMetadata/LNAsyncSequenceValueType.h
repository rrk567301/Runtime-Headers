@class LNValueType;

@interface LNAsyncSequenceValueType : LNValueType

@property (readonly, nonatomic) long long capabilities;
@property (readonly, copy, nonatomic) LNValueType *memberValueType;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMemberValueType:(id)a0 capabilities:(long long)a1;

@end
