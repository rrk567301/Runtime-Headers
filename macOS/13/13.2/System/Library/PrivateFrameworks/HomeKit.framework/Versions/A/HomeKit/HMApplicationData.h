@class NSSet, NSDictionary, NSArray, NSMutableDictionary;

@interface HMApplicationData : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_applicationData;
}

@property (class, readonly) NSSet *allowedObjectClasses;

@property (copy) NSDictionary *dictionary;
@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allValues;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)dictionaryRepresentation;
- (id)initWithContentsOfDictionary:(id)a0;
- (id)initWithDictionaryFromCoder:(id)a0 key:(id)a1;

@end
