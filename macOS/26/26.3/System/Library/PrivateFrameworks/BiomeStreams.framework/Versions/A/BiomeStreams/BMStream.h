@interface BMStream : BMStreamBase

- (id)publisherWithOptions:(id)a0;
- (id)publisherWithUseCase:(id)a0;
- (id)publisherWithUser:(unsigned int)a0 useCase:(id)a1 options:(id)a2;
- (id)pruner;
- (id)publisher;
- (id)source;
- (id)sourceWithUser:(unsigned int)a0;
- (id)prunerForDevice:(id)a0;
- (id)publisherWithUseCase:(id)a0 options:(id)a1;

@end
