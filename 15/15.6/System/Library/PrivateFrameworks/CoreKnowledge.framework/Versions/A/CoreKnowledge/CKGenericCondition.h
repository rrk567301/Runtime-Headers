@class NSPredicate, NSString;

@interface CKGenericCondition : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ negated;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sql;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(char)a0;
- (id)or:(id)a0;
- (id)and:(id)a0;
- (id)initWithMatchType:(long long)a0 value:(id)a1 negated:(char)a2;
- (char)evaluateOn:(id)a0;

@end
