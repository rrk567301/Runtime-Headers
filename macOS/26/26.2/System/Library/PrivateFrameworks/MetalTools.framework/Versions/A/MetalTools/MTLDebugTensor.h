@interface MTLDebugTensor : MTLToolsTensor <MTLDebugResourcePurgeable> {
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
}

- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (BOOL)purgeableStateValidForRendering;
- (void)replaceSlice:(struct MTLTensorSlice { id x0; id x1; })a0 withBytes:(const void *)a1 strides:(id)a2;
- (void)getBytes:(void *)a0 strides:(id)a1 fromSlice:(struct MTLTensorSlice { id x0; id x1; })a2;
- (void)getBytes:(void *)a0 strides:(id)a1 fromSliceOrigin:(id)a2 sliceDimensions:(id)a3;
- (id)initWithBaseObject:(id)a0 buffer:(id)a1;
- (id)initWithBaseObject:(id)a0 parentTensor:(id)a1;
- (void)lockPurgeableState;
- (id)newTensorViewWithReshapedDescriptor:(id)a0 error:(id *)a1;
- (id)newTensorViewWithSlice:(struct MTLTensorSlice { id x0; id x1; })a0 error:(id *)a1;
- (void)replaceSliceOrigin:(id)a0 sliceDimensions:(id)a1 withBytes:(const void *)a2 strides:(id)a3;
- (void)unlockPurgeableState;
- (void)verifyGetBytesReplaceSliceWithContext:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a0 strides:(id)a1 slice:(struct MTLTensorSlice { id x0; id x1; })a2;

@end
