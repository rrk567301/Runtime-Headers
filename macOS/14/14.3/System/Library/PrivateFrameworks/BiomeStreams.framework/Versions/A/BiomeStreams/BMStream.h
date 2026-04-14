@interface BMStream : BMStreamBase

- (id)source;
- (id)publisher;
- (id)publisherWithOptions:(id)a0;
- (id)publisherWithUseCase:(id)a0 options:(id)a1;
- (id)pruner;
- (id)sourceWithUser:(unsigned int)a0;
- (id)publisherWithUseCase:(id)a0;

@end
