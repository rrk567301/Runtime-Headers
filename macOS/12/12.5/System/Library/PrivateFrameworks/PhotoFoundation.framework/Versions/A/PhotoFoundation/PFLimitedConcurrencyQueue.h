@interface PFLimitedConcurrencyQueue : PFDispatchQueue

@property (readonly) unsigned long long concurrencyLimit;

+ (id)newQueueWithLabel:(id)a0 concurrencyLimit:(unsigned long long)a1 qos:(unsigned int)a2;
+ (id)newQueueWithLabel:(id)a0 qos:(unsigned int)a1 targetQueue:(id)a2 extensions:(id)a3;
+ (id)_newQueueWithLabel:(id)a0 qos:(unsigned int)a1 targetQueue:(id)a2;
+ (Class)concreteQueueClass;
+ (id)newQueueWithLabel:(id)a0 concurrencyLimit:(unsigned long long)a1;
+ (id)newQueueWithLabel:(id)a0 concurrencyLimit:(unsigned long long)a1 qos:(unsigned int)a2 targetQueue:(id)a3 extensions:(id)a4;
+ (unsigned long long)defaultConcurrency;

@end
