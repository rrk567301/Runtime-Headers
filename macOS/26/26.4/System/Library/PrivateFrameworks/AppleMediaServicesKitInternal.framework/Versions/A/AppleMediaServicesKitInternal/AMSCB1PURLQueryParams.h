@interface AMSCB1PURLQueryParams : NSObject <NSCopying> {
    struct QueryParams { void *__begin_; void *__end_; struct { void *__cap_; } ; } _queryParams;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
