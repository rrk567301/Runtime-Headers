@class NSString, NSArray;

@interface _CRSearchCollectionPredicate : CRSearchPredicate

@property (readonly, copy) NSString *key;
@property (readonly, copy) NSArray *collection;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asNSPredicate;
- (id)initWithKey:(id)a0 collection:(id)a1;

@end
