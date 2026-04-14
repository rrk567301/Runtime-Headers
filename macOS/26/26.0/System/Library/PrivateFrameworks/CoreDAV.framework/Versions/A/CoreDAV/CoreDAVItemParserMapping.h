@class NSString;

@interface CoreDAVItemParserMapping : NSObject

@property (retain, nonatomic) NSString *nameSpace;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) Class parseClass;

- (id)description;
- (id)initWithNameSpace:(id)a0 name:(id)a1 parseClass:(Class)a2;
- (void).cxx_destruct;

@end
