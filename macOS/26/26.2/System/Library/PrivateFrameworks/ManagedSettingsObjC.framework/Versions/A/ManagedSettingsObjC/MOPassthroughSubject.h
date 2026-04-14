@class NSMutableDictionary;

@interface MOPassthroughSubject : MOSubject

@property (readonly, nonatomic) NSMutableDictionary *downstreams;

+ (id)new;

- (void)subscribe:(id)a0;
- (void)sendCompletion:(id)a0;
- (void).cxx_destruct;
- (void)disassociate:(id)a0;
- (void)sendValue:(id)a0;
- (id)init;
- (BOOL)hasSubscriptionWithIdentifier:(id)a0;

@end
