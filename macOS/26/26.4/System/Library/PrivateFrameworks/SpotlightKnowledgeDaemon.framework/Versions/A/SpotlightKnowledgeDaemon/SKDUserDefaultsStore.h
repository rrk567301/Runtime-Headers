@class NSString;

@interface SKDUserDefaultsStore : NSUserDefaults <SKDMappedStore, SKDTimestampedStore> {
    NSString *_domain;
    double _timestamp;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)domain;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDomain:(id)a0;
- (void)removeName:(id)a0;
- (id)allTimestamps;
- (id)URLForKey:(id)a0 name:(id)a1;
- (void)setFloat:(float)a0 forKey:(id)a1 name:(id)a2 timestamp:(double)a3;
- (void)setUnsignedInteger:(unsigned long long)a0 forKey:(id)a1 name:(id)a2;
- (void)addToObjectForKey:(id)a0 value:(id)a1 name:(id)a2;
- (void)addToUnsignedIntegerForKey:(id)a0 value:(id)a1 name:(id)a2;
- (id)arrayForKey:(id)a0 name:(id)a1;
- (BOOL)boolForKey:(id)a0 name:(id)a1;
- (id)dataForKey:(id)a0 name:(id)a1;
- (id)dateForKey:(id)a0 name:(id)a1;
- (void)decrementUnsignedIntegerForKey:(id)a0 name:(id)a1;
- (id)dictionaryForKey:(id)a0 name:(id)a1;
- (id)dictionaryRepresentationForName:(id)a0;
- (double)doubleForKey:(id)a0 name:(id)a1;
- (float)floatForKey:(id)a0 name:(id)a1;
- (void)incrementUnsignedIntegerForKey:(id)a0 name:(id)a1;
- (long long)integerForKey:(id)a0 name:(id)a1;
- (id)objectForKey:(id)a0 name:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1 name:(id)a2;
- (void)setBool:(BOOL)a0 forKey:(id)a1 name:(id)a2 timestamp:(double)a3;
- (void)setDate:(id)a0 forKey:(id)a1 name:(id)a2;
- (void)setDouble:(double)a0 forKey:(id)a1 name:(id)a2;
- (void)setDouble:(double)a0 forKey:(id)a1 name:(id)a2 timestamp:(double)a3;
- (void)setFloat:(float)a0 forKey:(id)a1 name:(id)a2;
- (void)setInteger:(long long)a0 forKey:(id)a1 name:(id)a2;
- (void)setInteger:(long long)a0 forKey:(id)a1 name:(id)a2 timestamp:(double)a3;
- (void)setObject:(id)a0 forKey:(id)a1 name:(id)a2;
- (void)setObject:(id)a0 forKey:(id)a1 name:(id)a2 timestamp:(double)a3;
- (void)setTimeInterval:(double)a0 forKey:(id)a1 name:(id)a2;
- (void)setTimeInterval:(double)a0 forKey:(id)a1 name:(id)a2 timestamp:(double)a3;
- (void)setTimestamp:(double)a0 forKey:(id)a1;
- (void)setURL:(id)a0 forKey:(id)a1 name:(id)a2;
- (void)setURL:(id)a0 forKey:(id)a1 name:(id)a2 timestamp:(double)a3;
- (void)setUnsignedInteger:(unsigned long long)a0 forKey:(id)a1 name:(id)a2 timestamp:(double)a3;
- (void)setUnsignedLongLong:(unsigned long long)a0 forKey:(id)a1 name:(id)a2;
- (void)setUnsignedLongLong:(unsigned long long)a0 forKey:(id)a1 name:(id)a2 timestamp:(double)a3;
- (id)stringArrayForKey:(id)a0 name:(id)a1;
- (id)stringForKey:(id)a0 name:(id)a1;
- (void)subtractFromObjectForKey:(id)a0 value:(id)a1 name:(id)a2;
- (unsigned long long)unsignedIntegerForKey:(id)a0 name:(id)a1;
- (unsigned long long)unsignedLongLongForKey:(id)a0 name:(id)a1;

@end
