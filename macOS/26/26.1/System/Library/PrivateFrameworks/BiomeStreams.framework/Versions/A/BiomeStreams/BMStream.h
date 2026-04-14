@interface BMStream : BMStreamBase

- (id)publisher;
- (id)prunerForDevice:(id)a0;
- (id)publisherWithOptions:(id)a0;
- (id)publisherWithUseCase:(id)a0 options:(id)a1;
- (id)publisherWithUseCase:(id)a0;
- (id)pruner;
- (id)sourceWithUser:(unsigned int)a0;
- (id)source;
- (id)publisherWithUser:(unsigned int)a0 useCase:(id)a1 options:(id)a2;

@end
