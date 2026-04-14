@interface MTLDebugTextureViewPool : MTLToolsTextureViewPool

- (id)initWithTextureViewPool:(id)a0 device:(id)a1;
- (struct MTLResourceID { unsigned long long x0; })setTextureViewFromBuffer:(id)a0 descriptor:(id)a1 offset:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 atIndex:(unsigned long long)a4;
- (void)copyResourceStatesFromPool:(id)a0 sourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destinationLocation:(unsigned long long)a2;
- (struct MTLResourceID { unsigned long long x0; })copyResourceViewsFromPool:(id)a0 sourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destinationIndex:(unsigned long long)a2;
- (struct MTLResourceID { unsigned long long x0; })setTextureView:(id)a0 atIndex:(unsigned long long)a1;
- (struct MTLResourceID { unsigned long long x0; })setTextureView:(id)a0 descriptor:(id)a1 atIndex:(unsigned long long)a2;

@end
