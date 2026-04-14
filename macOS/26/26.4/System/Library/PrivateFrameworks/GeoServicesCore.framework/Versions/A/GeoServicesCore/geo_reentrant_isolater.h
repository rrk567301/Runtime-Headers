@interface geo_reentrant_isolater : NSObject {
    char *_name;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

- (id)debugDescription;
- (id)initWithName:(const char *)a0;
- (id)description;
- (void)dealloc;

@end
