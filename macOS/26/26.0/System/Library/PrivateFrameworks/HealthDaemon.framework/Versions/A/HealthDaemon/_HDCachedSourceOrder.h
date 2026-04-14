@interface _HDCachedSourceOrder : NSObject {
    BOOL _userOrdered;
    BOOL _isDefaultSourceOrder;
    struct vector<_HDWrappedSource, std::allocator<_HDWrappedSource>> { struct _HDWrappedSource *__begin_; struct _HDWrappedSource *__end_; struct _HDWrappedSource *__cap_; } _orderedSources;
}

- (id)init;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
