@class MechanismManager;

@interface Module : NSObject

@property (readonly, nonatomic) MechanismManager *mechanismManager;
@property (readonly, nonatomic) long long type;

+ (id)missingSubclassErrorWithIdentifier:(id)a0;

- (void)untrackProxy:(id)a0 fromPlugin:(id)a1 reason:(id)a2;
- (id)initWithMechanismManager:(id)a0 type:(long long)a1;
- (void)untrackPlugin:(id)a0 reason:(id)a1;
- (void)trackPlugin:(id)a0 processId:(int)a1 proxy:(id)a2 context:(id)a3 invalidationBlock:(id /* block */)a4;
- (void)contextPluginWithExternalizedContext:(id)a0 flags:(long long)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;

@end
