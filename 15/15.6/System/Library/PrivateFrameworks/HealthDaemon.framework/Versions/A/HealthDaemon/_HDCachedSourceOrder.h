@interface _HDCachedSourceOrder : NSObject {
    char _userOrdered;
    char _isDefaultSourceOrder;
    struct vector<_HDWrappedSource, std::allocator<_HDWrappedSource>> { struct _HDWrappedSource *__begin_; struct _HDWrappedSource *__end_; struct __compressed_pair<_HDWrappedSource *, std::allocator<_HDWrappedSource>> { struct _HDWrappedSource *__value_; } __end_cap_; } _orderedSources;
}

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
