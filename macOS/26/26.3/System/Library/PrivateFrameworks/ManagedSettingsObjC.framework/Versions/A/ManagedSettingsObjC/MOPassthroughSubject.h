@class NSMutableDictionary;

@interface MOPassthroughSubject : MOSubject

@property (readonly, nonatomic) NSMutableDictionary *downstreams;

+ (id)new;

- (void)disassociate:(id)a0;
- (void)subscribe:(id)a0;
- (void)sendCompletion:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)sendValue:(id)a0;
- (BOOL)hasSubscriptionWithIdentifier:(id)a0;

@end
