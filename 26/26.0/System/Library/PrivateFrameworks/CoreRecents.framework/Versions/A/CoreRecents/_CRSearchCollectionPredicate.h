@class NSString, NSArray;

@interface _CRSearchCollectionPredicate : CRSearchPredicate

@property (readonly, copy) NSString *key;
@property (readonly, copy) NSArray *collection;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asNSPredicate;
- (unsigned long long)hash;
- (id)initWithKey:(id)a0 collection:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
