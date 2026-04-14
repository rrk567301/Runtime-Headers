@interface geo_isolater : NSObject {
    char *_name;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)debugDescription;
- (id)initWithName:(const char *)a0;
- (id)description;
- (void)dealloc;

@end
