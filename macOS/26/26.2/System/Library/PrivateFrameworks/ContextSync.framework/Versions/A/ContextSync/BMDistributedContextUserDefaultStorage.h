@class NSUserDefaults;

@interface BMDistributedContextUserDefaultStorage : NSObject <BMDistributedContextSubscriptionStorage> {
    NSUserDefaults *_storage;
}

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithUserDefault:(id)a0;

@end
