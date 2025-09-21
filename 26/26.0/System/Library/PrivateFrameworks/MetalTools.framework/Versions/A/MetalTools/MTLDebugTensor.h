@interface MTLDebugTensor : MTLToolsTensor <MTLDebugResourcePurgeable>

- (void)replaceSlice:(struct MTLTensorSlice { id x0; id x1; })a0 withBytes:(const void *)a1 strides:(id)a2;
- (void)getBytes:(void *)a0 strides:(id)a1 fromSlice:(struct MTLTensorSlice { id x0; id x1; })a2;
- (void)getBytes:(void *)a0 strides:(id)a1 fromSliceOrigin:(id)a2 sliceDimensions:(id)a3;
- (id)newTensorViewWithReshapedDescriptor:(id)a0 error:(id *)a1;
- (id)newTensorViewWithSlice:(struct MTLTensorSlice { id x0; id x1; })a0 error:(id *)a1;
- (void)replaceSliceOrigin:(id)a0 sliceDimensions:(id)a1 withBytes:(const void *)a2 strides:(id)a3;
- (void)verifyGetBytesReplaceSliceWithContext:(struct _MTLMessageContext { long long x0; char *x1; unsigned int x2; id x3; long long x4; id x5; char *x6; } *)a0 strides:(id)a1 slice:(struct MTLTensorSlice { id x0; id x1; })a2;

@end
