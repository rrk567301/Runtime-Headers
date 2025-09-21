@class NSString;
@protocol _CNContactHandleStringEquivalenceStrategy;

@interface CNContactHandleIndexableString : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) id<_CNContactHandleStringEquivalenceStrategy> equivalenceStrategy;
@property (readonly, copy, nonatomic) NSString *indexKey;

+ (id)emailIndexKey:(id)a0;
+ (id)equivalenceStrategyWithString:(id)a0;
+ (id)phoneNumberIndexKey:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFullString:(id)a0 indexKey:(id)a1 equivalenceStrategy:(id)a2;
- (char)isEquivalentToString:(id)a0 strict:(char *)a1;

@end
