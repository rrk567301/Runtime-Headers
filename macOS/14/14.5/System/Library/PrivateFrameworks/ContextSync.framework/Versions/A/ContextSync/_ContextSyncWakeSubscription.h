@class NSMutableDictionary;

@interface _ContextSyncWakeSubscription : NSObject

@property (retain, nonatomic) NSMutableDictionary *DSLtoWakeSubscription;

+ (id)wakeSubscription:(BOOL)a0 forIdentifier:(id)a1;
+ (id)wakeSubscription;

- (void).cxx_destruct;
- (id)identifiers;
- (BOOL)removeIdentifier:(id)a0;
- (BOOL)addIdentifier:(id)a0 withWake:(BOOL)a1;
- (BOOL)existsIdentifier:(id)a0;
- (BOOL)hasWakingIdentifier;
- (BOOL)isIdentifierWaking:(id)a0;
- (id)lastChangeDateForIdentifier:(id)a0;
- (id)wakeStateWithIdentifier:(id)a0;

@end
