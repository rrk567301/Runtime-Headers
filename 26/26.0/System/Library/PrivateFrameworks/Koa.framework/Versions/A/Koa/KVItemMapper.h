@class KMItemMapper;

@interface KVItemMapper : NSObject {
    KMItemMapper *_mapper;
}

- (id)init;
- (id)mapObject:(id)a0 additionalFields:(id)a1 error:(id *)a2;
- (id)initWithObjectClass:(Class)a0 error:(id *)a1;
- (id)mapObject:(id)a0 error:(id *)a1;
- (long long)targetItemType;
- (void).cxx_destruct;

@end
