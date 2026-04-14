@class PK_ipp_collection_t;

@interface PKCollectionSpecialization : NSObject <NSCopying> {
    struct Printd_Parameters_ForColTypes { id x0; } *_params;
    PK_ipp_collection_t *_collection;
}

- (id)collection;
- (id)debugDescription;
- (id)initWithCollection:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const struct Printd_Parameters_ForColTypes { id x0; } *)params;

@end
