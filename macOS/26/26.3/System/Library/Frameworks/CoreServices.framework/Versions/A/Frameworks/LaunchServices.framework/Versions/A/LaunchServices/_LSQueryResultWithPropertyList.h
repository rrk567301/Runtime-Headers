@interface _LSQueryResultWithPropertyList : _LSQueryResult

@property (readonly, retain, nonatomic) id propertyList;

+ (BOOL)supportsSecureCoding;

- (id)initWithPropertyList:(id)a0;
- (void).cxx_destruct;
- (id)propertyListWithClass:(Class)a0 valuesOfClass:(Class)a1;
- (id)initWithCoder:(id)a0;
- (id)propertyListWithClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;

@end
