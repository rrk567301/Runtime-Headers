@class NSUserDefaults;

@interface BMDistributedContextUserDefaultStorage : NSObject <BMDistributedContextSubscriptionStorage> {
    NSUserDefaults *_storage;
}

- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithUserDefault:(id)a0;

@end
