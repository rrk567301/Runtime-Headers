@interface USKPropertyIterator : NSObject <USKIterator> {
    struct vector<pxrInternal__aapl__pxrReserved__::UsdProperty, std::allocator<pxrInternal__aapl__pxrReserved__::UsdProperty>> { struct UsdProperty *__begin_; struct UsdProperty *__end_; struct UsdProperty *__cap_; } _properties;
    struct __wrap_iter<pxrInternal__aapl__pxrReserved__::UsdProperty *> { struct UsdProperty *__i_; } _it;
}

- (id)initWithProperties:(const void *)a0;
- (id)nextObject;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
