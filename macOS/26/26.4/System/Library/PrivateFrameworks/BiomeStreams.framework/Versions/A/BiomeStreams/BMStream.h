@interface BMStream : BMStreamBase

- (id)publisherWithUseCase:(id)a0;
- (id)publisher;
- (id)publisherWithUser:(unsigned int)a0 useCase:(id)a1 options:(id)a2;
- (id)publisherWithOptions:(id)a0;
- (id)sourceWithUser:(unsigned int)a0;
- (id)pruner;
- (id)prunerForDevice:(id)a0;
- (id)source;
- (id)publisherWithUseCase:(id)a0 options:(id)a1;

@end
