@interface geo_object_isolater : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id _value;
}

@property (retain, nonatomic) id value;

- (id)initWithValue:(id)a0;
- (id)mutate:(id /* block */)a0;
- (void).cxx_destruct;

@end
