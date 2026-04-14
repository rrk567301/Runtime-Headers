@class NSUserDefaults;

@interface BMDistributedContextUserDefaultStorage : NSObject <BMDistributedContextSubscriptionStorage> {
    NSUserDefaults *_storage;
}

- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithUserDefault:(id)a0;

@end
