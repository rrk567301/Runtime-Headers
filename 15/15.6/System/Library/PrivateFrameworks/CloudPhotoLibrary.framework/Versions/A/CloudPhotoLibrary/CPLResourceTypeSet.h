@interface CPLResourceTypeSet : NSObject {
    unsigned long long _baseTypesBits;
    unsigned long long _extraTypeBits;
}

@property (readonly, nonatomic, getter=isEmpty) char empty;
@property (readonly, nonatomic) unsigned long long count;

- (id)description;
- (char)isEqual:(id)a0;
- (id)redactedDescription;
- (id)unionSet:(id)a0;
- (void)enumerateResourceTypesWithBlock:(id /* block */)a0;
- (void)addResourceType:(unsigned long long)a0;
- (char)containsResourceType:(unsigned long long)a0;
- (id)intersectionWithSet:(id)a0;
- (char)intersectsWithSet:(id)a0;
- (void)removeResourceType:(unsigned long long)a0;

@end
