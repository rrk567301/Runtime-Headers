@interface WFCoercionVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) Class coercionItemClass;

- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoercionItemClass:(Class)a0;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (id)coercionItemClasses;
- (id)processedContentClasses:(id)a0;

@end
