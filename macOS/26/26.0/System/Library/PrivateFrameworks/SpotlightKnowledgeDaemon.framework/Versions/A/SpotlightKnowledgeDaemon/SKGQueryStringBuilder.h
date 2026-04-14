@class NSMutableArray;

@interface SKGQueryStringBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *queryComponents;
@property (readonly, nonatomic) id /* block */ withAttribute;
@property (readonly, nonatomic) id /* block */ withAttributeValues;
@property (readonly, nonatomic) id /* block */ withFieldMatch;
@property (readonly, nonatomic) id /* block */ withQuery;
@property (readonly, nonatomic) id /* block */ withQueries;

+ (id)queryForAttributesAbsent:(id)a0;
+ (id)queryForAttributesExist:(id)a0;

- (id)not;
- (id)init;
- (id)build;
- (void).cxx_destruct;
- (id)and;
- (id)beginGroup;
- (id)endGroup;
- (id)or;

@end
