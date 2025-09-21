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

- (long long)integerValue;
- (id)value;
- (BOOL)boolValue;
- (void)cancel;
- (id)stringValue;
- (unsigned long long)unsignedIntegerValue;
- (id)key;
- (id)arrayValue;
- (void).cxx_destruct;
- (void)getCurrentStateWithCompletion:(id /* block */)a0;
- (id)initWithTargetContext:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
