@interface _HDCachedSourceOrder : NSObject {
    BOOL _userOrdered;
    BOOL _isDefaultSourceOrder;
    struct vector<_HDWrappedSource, std::allocator<_HDWrappedSource>> { struct _HDWrappedSource *__begin_; struct _HDWrappedSource *__end_; struct { struct _HDWrappedSource *__cap_; } ; } _orderedSources;
}

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)description;

@end
