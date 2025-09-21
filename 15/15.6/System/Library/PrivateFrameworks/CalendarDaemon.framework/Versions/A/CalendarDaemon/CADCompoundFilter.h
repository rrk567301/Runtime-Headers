@class NSArray;

@interface CADCompoundFilter : CADFilter

@property (readonly, nonatomic) NSArray *filters;
@property (readonly, nonatomic) long long operation;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)validate;
- (id)initWithFilters:(id)a0 operation:(long long)a1;
- (char)applicableToEntityType:(int)a0;
- (id)extendWhereClause:(id)a0 usingOperation:(long long)a1 withValues:(id)a2 andTypes:(id)a3;

@end
