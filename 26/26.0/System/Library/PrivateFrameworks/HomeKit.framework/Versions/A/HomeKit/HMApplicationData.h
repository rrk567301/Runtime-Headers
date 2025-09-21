@class NSSet, NSMutableDictionary, NSArray, NSDictionary;

@interface HMApplicationData : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSSet *allowedObjectClasses;

@property (readonly) NSMutableDictionary *mutableDictionary;
@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allValues;
@property (readonly, copy) NSDictionary *dictionary;

- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryFromCoder:(id)a0 key:(id)a1;

@end
