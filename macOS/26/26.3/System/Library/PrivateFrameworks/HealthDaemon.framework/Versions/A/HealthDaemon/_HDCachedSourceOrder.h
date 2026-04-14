@interface _HDCachedSourceOrder : NSObject {
    BOOL _userOrdered;
    BOOL _isDefaultSourceOrder;
    struct vector<_HDWrappedSource, std::allocator<_HDWrappedSource>> { struct _HDWrappedSource *__begin_; struct _HDWrappedSource *__end_; struct { struct _HDWrappedSource *__cap_; } ; } _orderedSources;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id).cxx_construct;

@end
