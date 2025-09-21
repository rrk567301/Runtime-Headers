@class NSMapTable;

@interface HKMultimap : NSObject <NSCopying> {
    NSMapTable *_table;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)multimapWithStrongObjects;
+ (id)multimapWithWeakObjects;

- (void)removeObject:(id)a0 forKey:(id)a1;
- (void)removeObject:(id)a0;
- (id)initWithType:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)removeObjectsForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)objectsForKey:(id)a0;

@end
