@interface CacheEntry : NSObject

@property (class, readonly) CacheEntry *unknown;
@property (class, readonly) CacheEntry *notFound;

@property (readonly, retain) id internalValue;
@property (readonly) unsigned long long type;
@property (readonly) id value;

+ (id)availableItemWithValue:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInternalValue:(id)a0;

@end
