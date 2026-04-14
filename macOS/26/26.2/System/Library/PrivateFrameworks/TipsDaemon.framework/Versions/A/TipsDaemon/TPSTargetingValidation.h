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

- (unsigned long long)unsignedIntegerValue;
- (long long)integerValue;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)boolValue;
- (id)stringValue;
- (id)value;
- (id)arrayValue;
- (id)key;
- (void)getCurrentStateWithCompletion:(id /* block */)a0;
- (id)initWithTargetContext:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
