@class NSString, NSArray;

@interface _CRSearchCollectionPredicate : CRSearchPredicate

@property (readonly, copy) NSString *key;
@property (readonly, copy) NSArray *collection;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)asNSPredicate;
- (id)initWithKey:(id)a0 collection:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
