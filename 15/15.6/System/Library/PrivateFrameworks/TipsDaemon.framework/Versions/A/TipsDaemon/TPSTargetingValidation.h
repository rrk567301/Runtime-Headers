@class NSString, NSDictionary;

@interface TPSTargetingValidation : NSObject <TPSValidatable>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *targetContext;
@property (nonatomic) long long joinType;
@property (nonatomic) char ignoreCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)boolValue;
- (long long)integerValue;
- (id)stringValue;
- (unsigned long long)unsignedIntegerValue;
- (id)value;
- (id)key;
- (void)cancel;
- (id)arrayValue;
- (void)getCurrentStateWithCompletion:(id /* block */)a0;
- (id)initWithTargetContext:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
