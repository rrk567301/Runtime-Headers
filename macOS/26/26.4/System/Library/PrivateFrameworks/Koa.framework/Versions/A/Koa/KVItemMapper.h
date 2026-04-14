@class KMItemMapper;

@interface KVItemMapper : NSObject {
    KMItemMapper *_mapper;
}

- (id)mapObject:(id)a0 error:(id *)a1;
- (id)initWithObjectClass:(Class)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)mapObject:(id)a0 additionalFields:(id)a1 error:(id *)a2;
- (id)init;
- (long long)targetItemType;

@end
