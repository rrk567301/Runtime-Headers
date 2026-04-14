@class NSArray, NSString, NSAttributedString;

@interface PXSearchNavigationAttributes : NSObject

@property (copy, nonatomic) NSArray *searchTerms;
@property (copy, nonatomic) NSArray *searchCategories;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSAttributedString *decoratedQuery;
@property (copy, nonatomic) NSString *completionKey;

+ (id)attributesForURLComponents:(id)a0;
+ (id)attributesWithDecoratedQuery:(id)a0;
+ (id)attributesWithGenericSearchTerm:(id)a0;
+ (id)attributesWithGenericSearchText:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToSearchNavigationAttributes:(id)a0;
- (id)attributedSearchStringWithLibrary:(id)a0;

@end
