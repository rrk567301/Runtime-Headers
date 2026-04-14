@class NSString, NSPredicate, NSArray;

@interface CLSQuerySpecification : NSObject <NSSecureCoding> {
    unsigned long long _offset;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *entityName;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *sortDescriptors;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) unsigned long long observerOptions;

+ (id)querySpecificationWithObjectName:(id)a0 predicate:(id)a1;
+ (id)querySpecificationWithObjectType:(Class)a0 predicate:(id)a1;

- (void)setOffset:(unsigned long long)a0;
- (void)setPredicate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (unsigned long long)offset;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithObjectName:(id)a0 predicate:(id)a1;
- (id)initWithObjectType:(Class)a0 predicate:(id)a1;

@end
