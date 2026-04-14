@class NSString, NSArray;

@interface PFSQLitePredicate : NSObject <PFSQLConvertible>

@property (readonly, copy, nonatomic) NSString *formatString;
@property (readonly, copy, nonatomic) NSArray *arguments;
@property (readonly, copy, nonatomic) NSArray *columns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)andPredicateWithPredicates:(id)a0;
+ (id)orPredicateWithPredicates:(id)a0;
+ (id)predicateForDescriptor:(id)a0 coder:(id)a1;
+ (id)predicateWithColumn:(id)a0 operatorType:(unsigned long long)a1 value:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)andPredicate:(id)a0;
- (id)initWithFormat:(id)a0 arguments:(id)a1 columns:(id)a2;
- (id)notPredicate;
- (id)orPredicate:(id)a0;
- (BOOL)pf_bindToStatement:(struct sqlite3_stmt { } *)a0 index:(unsigned long long)a1 offset:(unsigned long long)a2;
- (id)pf_toSQLWithBindings:(out unsigned long long *)a0;

@end
