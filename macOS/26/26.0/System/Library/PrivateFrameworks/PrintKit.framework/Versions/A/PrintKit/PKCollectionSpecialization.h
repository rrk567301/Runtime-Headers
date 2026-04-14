@class PK_ipp_collection_t;

@interface PKCollectionSpecialization : NSObject <NSCopying> {
    struct Printd_Parameters_ForColTypes { id x0; } *_params;
    PK_ipp_collection_t *_collection;
}

- (id)initWithCollection:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)collection;
- (void).cxx_destruct;
- (const struct Printd_Parameters_ForColTypes { id x0; } *)params;

@end
