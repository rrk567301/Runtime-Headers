@class NSString, NSMutableArray;

@interface ML3DatabaseNaturalStatement : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *sql;
@property (retain, nonatomic) NSMutableArray *parameters;

+ (id)naturalStatementWithSQL:(id)a0 parameters:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSQL:(id)a0 parameters:(id)a1;
- (void)setParameter:(id)a0 forPosition:(unsigned long long)a1;

@end
