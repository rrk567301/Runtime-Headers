@interface USKObjectPath : NSObject {
    struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _primPart; struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _propPart; } _path;
}

- (id)init;
- (struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; })path;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithToken:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)stringValue;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)propertyName;
- (id)nodePath;
- (id)pathByAppendingPropertyComponent:(id)a0;
- (id)tokenValue;
- (id)initWithSdfPath:(struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; })a0;
- (BOOL)isNodePath;
- (BOOL)isPropertyPath;

@end
