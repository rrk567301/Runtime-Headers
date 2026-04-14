@interface BAObjectManager : NSObject

+ (void)initialize;
+ (long long)_debugLoggingLevel;
+ (struct ComponentInstanceRecord { long long x0[1]; } *)component;
+ (id)scriptComponentInstances;
+ (id)scriptOSAIDs;
+ (id)objectForOSAID:(unsigned int)a0 inComponentInstance:(struct ComponentInstanceRecord { long long x0[1]; } *)a1;
+ (struct ComponentInstanceRecord { long long x0[1]; } *)componentInstanceForClass:(Class)a0;
+ (void)setComponentInstance:(struct ComponentInstanceRecord { long long x0[1]; } *)a0 forClass:(Class)a1;
+ (unsigned int)OSAIDForClass:(Class)a0;
+ (void)setOSAID:(unsigned int)a0 forClass:(Class)a1;
+ (id)objectWithOSAID:(unsigned int)a0 inComponentInstance:(struct ComponentInstanceRecord { long long x0[1]; } *)a1;

@end
