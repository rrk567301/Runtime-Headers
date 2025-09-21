@interface TSCH3DNullFramebuffer : TSCH3DFramebuffer

- (void)setClearColor:(const void *)a0;
- (void)setClearDepth:(float)a0;
- (struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })size;
- (void)clear:(int)a0;
- (void)clean;
- (char)activateInsideSession:(id)a0;
- (void)bindColorbufferInSession:(id)a0;
- (char)bindInSession:(id)a0;
- (void)destroyResourcesInSession:(id)a0;
- (void)disableSamplingInSession:(id)a0;
- (void)discardBuffers;
- (void)discardColorBuffer;
- (void)discardDepthBuffer;
- (unsigned long long)estimatedMemoryInBytes;
- (char)getBytes:(void *)a0 viewport:(void *)a1 components:(unsigned long long)a2 forProcessor:(id)a3 session:(id)a4;
- (char)isProtectedInSession:(id)a0;
- (id)newMetalTextureWithDevice:(id)a0 forSession:(id)a1 returningIsFlipped:(char *)a2;
- (void)protectInSession:(id)a0 unprotectOnFail:(char)a1;
- (void)resetClearBufferTypes;
- (id)resolvingFramebuffer;
- (void)unprotectInSession:(id)a0 clearOnFailProtection:(char)a1;
- (char)validForSession:(id)a0;
- (void)wipe:(const void *)a0;

@end
