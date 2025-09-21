@class NSArray;

@interface BMSelectExpression : NSObject <BMTableQueryExpression>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *columnNames;
@property (retain, nonatomic) NSArray *children;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithChildren:(id)a0 columnNames:(id)a1;
- (id)queryTable:(id)a0;

@end
