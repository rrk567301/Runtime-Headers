@class NSString, NSArray;

@interface _CRSearchCollectionPredicate : CRSearchPredicate

@property (readonly, copy) NSString *key;
@property (readonly, copy) NSArray *collection;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)initWithKey:(id)a0 collection:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)asNSPredicate;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
