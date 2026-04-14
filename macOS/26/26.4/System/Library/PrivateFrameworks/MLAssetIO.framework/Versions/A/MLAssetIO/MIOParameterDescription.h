@class NSString, MIONumericConstraint;

@interface MIOParameterDescription : NSObject

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) id defaultValue;
@property (readonly, nonatomic) MIONumericConstraint *numericConstraint;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithKey:(id)a0 boolParameter:(const void *)a1;
- (id)initWithKey:(id)a0 defaultValue:(id)a1 numericConstraint:(id)a2;
- (id)initWithKey:(id)a0 doubleParameter:(const void *)a1;
- (id)initWithKey:(id)a0 int64Parameter:(const void *)a1;
- (id)initWithKey:(id)a0 stringParameter:(const void *)a1;

@end
