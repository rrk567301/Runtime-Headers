@class NSString, NSPredicate, NSArray;

@interface CLSQuerySpecification : NSObject <NSSecureCoding> {
    unsigned long long _state;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *entityName;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) unsigned long long observerOptions;

+ (id)querySpecificationWithObjectType:(Class)a0 predicate:(id)a1;
+ (id)querySpecificationWithObjectName:(id)a0 predicate:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)setState:(unsigned long long)a0;
- (void)setPredicate:(id)a0;
- (id)initWithObjectType:(Class)a0 predicate:(id)a1;
- (id)initWithObjectName:(id)a0 predicate:(id)a1;

@end
