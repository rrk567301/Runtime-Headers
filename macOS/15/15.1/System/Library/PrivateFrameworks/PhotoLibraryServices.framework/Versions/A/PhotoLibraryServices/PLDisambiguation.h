@class NSString, NSIndexSet;

@interface PLDisambiguation : NSObject

@property (readonly, nonatomic) NSString *queryTerm;
@property (readonly, nonatomic) NSIndexSet *indexingCategories;
@property (readonly, nonatomic) unsigned long long disambiguationType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithQueryTerm:(id)a0 disambiguationType:(unsigned long long)a1;

@end
