@class NSString, NSDictionary;

@interface TPSTargetingValidation : NSObject <TPSValidatable>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *targetContext;
@property (nonatomic) long long joinType;
@property (nonatomic) BOOL ignoreCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringValue;
- (long long)integerValue;
- (unsigned long long)unsignedIntegerValue;
- (BOOL)boolValue;
- (void).cxx_destruct;
- (void)cancel;
- (id)key;
- (id)value;
- (id)arrayValue;
- (id)initWithTargetContext:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
