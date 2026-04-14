@class NSMutableDictionary;

@interface MOPassthroughSubject : MOSubject

@property (readonly, nonatomic) NSMutableDictionary *downstreams;

+ (id)new;

- (void)sendCompletion:(id)a0;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)disassociate:(id)a0;
- (void)sendValue:(id)a0;
- (BOOL)hasSubscriptionWithIdentifier:(id)a0;

@end
